#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenager.h"

using namespace std;

class KsiazkaAdresowa{

    UzytkownikMenager uzytkownikMenager;

public:
    KsiazkaAdresowa(){
    uzytkownikMenager.wczytajUzytkownikowZPliku();
    };
    void wyswietlUzytkownikow();
    void rejestracjaUzytkownika();


};

#endif
