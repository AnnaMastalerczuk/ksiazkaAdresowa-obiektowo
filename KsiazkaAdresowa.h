#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenager.h"

using namespace std;

class KsiazkaAdresowa{

    UzytkownikMenager uzytkownikMenager;

public:
    KsiazkaAdresowa(string nazwaPlikUzytkownicy) : uzytkownikMenager(nazwaPlikUzytkownicy){
    uzytkownikMenager.wczytajUzytkownikowZPliku();
    };
    void wyswietlUzytkownikow();
    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void pobierzIdZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();


};

#endif
