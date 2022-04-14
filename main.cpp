#include <iostream>
#include <windows.h>

#include "KsiazkaAdresowa.h"

using namespace std;

int main() {
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "ksiazkaAdresowa.txt");
    char wybor;

    while (true) {
        if (!ksiazkaAdresowa.czyUzytkownikZalogowany()) {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (wybor) {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        } else {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

            switch (wybor) {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':
                ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
                break;
            case '3':
                ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();
                break;
            case '4':
                ksiazkaAdresowa.wyswietlAdresatowZalogowanegoUzytkownika();
                break;
            case '5':
                ksiazkaAdresowa.usunAdresata();
                break;
            case '6':
                ksiazkaAdresowa.edytujAdresata();
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '8':
                ksiazkaAdresowa.wylogowanieUzytkownika();
                break;
            }
        }
    }

    return 0;
}

int dodajadresata_main() {
    AdresatMenager adresatMenager("ksiazkaAdresowa.txt",1);
    adresatMenager.dodajAdresata();
    adresatMenager.dodajAdresata();

    return 0;
}

#include "AdresatMenager.h"
int usunadresata_main() {
AdresatMenager adresatMenager("ksiazkaAdresowa.txt",1);
adresatMenager.usunAdresata();
adresatMenager.wyswietlAdresatowZalogowanegoUzytkownika();

return 0;
}

#include "AdresatMenager.h"
int edytujadresata_main() {
AdresatMenager adresatMenager("ksiazkaAdresowa.txt",1);
adresatMenager.edytujAdresata();
adresatMenager.wyswietlAdresatowZalogowanegoUzytkownika();

return 0;
}

#include "AdresatMenager.h"
int dodawanie_main() {
AdresatMenager adresatMenager("ksiazkaAdresowa.txt",1);
adresatMenager.dodajAdresata();
adresatMenager.wyswietlAdresatowZalogowanegoUzytkownika();

return 0;
}

#include "PlikzAdresatami.h"
#include <vector>
int _main(){
PlikzAdresatami plik("ksiazkaAdresowa.txt");
vector <Adresat> adresaci;
plik.wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci, 1);

return 0;
}

