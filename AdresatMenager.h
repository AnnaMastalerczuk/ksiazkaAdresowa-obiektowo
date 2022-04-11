#ifndef ADRESATMENAGER_H
#define ADRESATMENAGER_H

#include <iostream>
#include <vector>

#include "Adresat.h"
#include "PlikzAdresatami.h"
#include "MetodyPomocnicze.h"


using namespace std;

class AdresatMenager{

    PlikzAdresatami plikzAdresatami;

    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    int idUsunietegoAdresata;
    vector <Adresat> adresaci;

    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);
    int podajIdWybranegoAdresata();


public:

    AdresatMenager(string nazwaPlikuzAdresatami, int idZalogowanegoUzytkownika)
    : plikzAdresatami(nazwaPlikuzAdresatami),ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika){
        plikzAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci,ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };

    void dodajAdresata();
    void wyswietlAdresatowZalogowanegoUzytkownika();
    //void czyszczenieWektoraAdresaci();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void usunAdresata();

};
#endif
