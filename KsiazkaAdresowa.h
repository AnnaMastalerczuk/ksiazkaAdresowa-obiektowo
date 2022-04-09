#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenager.h"
#include "AdresatMenager.h"

using namespace std;

class KsiazkaAdresowa{

    UzytkownikMenager uzytkownikMenager;
    AdresatMenager *adresatMenager;

    const string NAZWA_PLIKU_Z_ADRESATAMI;

public:
    KsiazkaAdresowa(string nazwaPlikUzytkownicy, string nazwaPlikuAdresaci)
    : uzytkownikMenager(nazwaPlikUzytkownicy), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuAdresaci){
        adresatMenager = NULL;
    };
    ~KsiazkaAdresowa(){
        delete adresatMenager;
        adresatMenager = NULL;
    }
    void wyswietlUzytkownikow();
    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void wylogowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void dodajAdresata();
    void wyswietlAdresatowZalogowanegoUzytkownika();

};

#endif
