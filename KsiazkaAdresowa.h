#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenager.h"
#include "AdresatMenager.h"

using namespace std;

class KsiazkaAdresowa{

    UzytkownikMenager uzytkownikMenager;
    AdresatMenager adresatMenager;

    int idZalogowanegoUzytkownika;

public:
    KsiazkaAdresowa(string nazwaPlikUzytkownicy) : uzytkownikMenager(nazwaPlikUzytkownicy){
    uzytkownikMenager.wczytajUzytkownikowZPliku();
    };
    void wyswietlUzytkownikow();
    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void wylogowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void dodajAdresata();

    int pobierzIdZalogowanegoUzytkownika();
    void wyswietlAdresatowZalogowanegoUzytkownika();

};

#endif
