#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::wyswietlUzytkownikow(){
    uzytkownikMenager.wyswietlUzytkownikow();
}

void KsiazkaAdresowa::rejestracjaUzytkownika(){
    uzytkownikMenager.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::logowanieUzytkownika(){
    uzytkownikMenager.logowanieUzytkownika();
}

void KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika(){
    uzytkownikMenager.pobierzIdZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogowanieUzytkownika(){
    uzytkownikMenager.wylogowanieUzytkownika();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika(){
    uzytkownikMenager.zmianaHaslaZalogowanegoUzytkownika();
}
