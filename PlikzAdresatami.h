#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>

#include "Adresat.h"
#include "MetodyPomocnicze.h"


using namespace std;

class PlikzAdresatami{

    string NAZWA_PLIKU_Z_ADRESATAMI;
    string NAZWA_PLIKU_TYMCZASOWEGO_Z_ADRESATAMI;
    int idOstatniegoAdresata;

    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    bool czyPlikJestPusty(fstream &plikTekstowy);
    void zapiszKontaktDoPlikuTymczasowego(Adresat adresat);
    int pobierzZPlikuIdOstatniegoAdresata();

public:
    PlikzAdresatami(string nazwaPlikuZAdresatami) : NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami), NAZWA_PLIKU_TYMCZASOWEGO_Z_ADRESATAMI("ksiazkaAdresowa_tymczasowy.txt"){
    };

    void wczytajAdresatowZalogowanegoUzytkownikaZPliku(vector <Adresat> &adresaci, int idZalogowanegoUzytkownika);
    bool dopiszAdresataDoPliku(Adresat adresat);
    int pobierzIdOstatniegoAdresata();
    void aktualizacjaPlikuKontaktyUsuniecie(vector <Adresat> &adresaci, int idUsuwanegoAdresata);
    void podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(int idUsuwanegoAdresata);

};
#endif
