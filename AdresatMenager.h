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

    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;
    vector <Adresat> adresaci;

    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);


public:

    int dodajAdresata(int id);
    void wyswietlAdresatowZalogowanegoUzytkownika();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);

    void czyszczenieWektoraAdresaci();

};
#endif
