#ifndef UZYTKOWNIKMENAGER_H
#define UZYTKOWNIKMENAGER_H

#include <iostream>
#include <vector>

#include "Uzytkownik.h"
#include "PlikzUzytkownikami.h"

using namespace std;

class UzytkownikMenager{

    PlikzUzytkownikami plikzUzytkownikami;

    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);

public:
    void wyswietlUzytkownikow();
    void rejestracjaUzytkownika();
    void wczytajUzytkownikowZPliku();

};

#endif