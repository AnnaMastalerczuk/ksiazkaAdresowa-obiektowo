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
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;
    vector <Adresat> adresaci;

    Adresat podajDaneNowegoAdresata();


public:

    AdresatMenager(string nazwaPlikuzAdresatami, int idZalogowanegoUzytkownika)
    : plikzAdresatami(nazwaPlikuzAdresatami),ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika){
        idOstatniegoAdresata = plikzAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci,ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };

    int dodajAdresata();
    void wyswietlAdresatowZalogowanegoUzytkownika();
    void czyszczenieWektoraAdresaci();

};
#endif
