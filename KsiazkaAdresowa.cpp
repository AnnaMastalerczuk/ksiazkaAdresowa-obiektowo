#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::wyswietlUzytkownikow(){
    uzytkownikMenager.wyswietlUzytkownikow();
}

void KsiazkaAdresowa::rejestracjaUzytkownika(){
    uzytkownikMenager.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::logowanieUzytkownika(){
    idZalogowanegoUzytkownika = uzytkownikMenager.logowanieUzytkownika();
    adresatMenager.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
}

void KsiazkaAdresowa::wylogowanieUzytkownika(){
    uzytkownikMenager.wylogowanieUzytkownika();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika(){
    uzytkownikMenager.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::dodajAdresata(){
   adresatMenager.dodajAdresata(idZalogowanegoUzytkownika);
}

int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika(){
    return idZalogowanegoUzytkownika;
}

void KsiazkaAdresowa::wyswietlAdresatowZalogowanegoUzytkownika(){
adresatMenager.wyswietlAdresatowZalogowanegoUzytkownika();
}
