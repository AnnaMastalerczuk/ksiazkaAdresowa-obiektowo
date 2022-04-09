#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::wyswietlUzytkownikow(){
    uzytkownikMenager.wyswietlUzytkownikow();
}

void KsiazkaAdresowa::rejestracjaUzytkownika(){
    uzytkownikMenager.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::logowanieUzytkownika(){
    uzytkownikMenager.logowanieUzytkownika();
    adresatMenager = new AdresatMenager(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenager.pobierzIdZalogowanegoUzytkownika());
}

void KsiazkaAdresowa::wylogowanieUzytkownika(){
    uzytkownikMenager.wylogowanieUzytkownika();
    adresatMenager->czyszczenieWektoraAdresaci();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika(){
    uzytkownikMenager.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::dodajAdresata(){
   adresatMenager->dodajAdresata();
}

void KsiazkaAdresowa::wyswietlAdresatowZalogowanegoUzytkownika(){
adresatMenager->wyswietlAdresatowZalogowanegoUzytkownika();
}
