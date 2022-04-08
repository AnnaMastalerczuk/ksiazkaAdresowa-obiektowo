#include <iostream>
#include <windows.h>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");

    ksiazkaAdresowa.wyswietlUzytkownikow();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.wyswietlUzytkownikow();

    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.wyswietlAdresatowZalogowanegoUzytkownika();
    ksiazkaAdresowa.wylogowanieUzytkownika();
        ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.wyswietlAdresatowZalogowanegoUzytkownika();
    ksiazkaAdresowa.wylogowanieUzytkownika();
    //ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika();
    //ksiazkaAdresowa.dodajAdresata();
    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    //ksiazkaAdresowa.wyswietlUzytkownikow();
    //ksiazkaAdresowa.wylogowanieUzytkownika();
    return 0;
}
