#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H

#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"


using namespace std;

class PlikzUzytkownikami{

    Uzytkownik uzytkownik;
    string nazwaPlikuZUzytkownikami;

    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    bool czyPlikJestPusty(fstream &plikTekstowy);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);

public:

    PlikzUzytkownikami(){
    nazwaPlikuZUzytkownikami = "Uzytkownicy.txt";
    };
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    vector <Uzytkownik> wczytajUzytkownikowZPliku();
};

#endif
