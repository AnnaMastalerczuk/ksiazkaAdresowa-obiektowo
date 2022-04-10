#include <iostream>
#include <windows.h>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "ksiazkaAdresowa.txt");
    char wybor;

    while (true)
    {
        if (!ksiazkaAdresowa.czyUzytkownikZalogowany())
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
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
        }
        else
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':

                break;
            case '3':

                break;
            case '4':
                ksiazkaAdresowa.wyswietlAdresatowZalogowanegoUzytkownika();
                break;
            case '5':

                break;
            case '6':

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

int dodajadresata_main(){
AdresatMenager adresatMenager("ksiazkaAdresowa.txt",1);
adresatMenager.dodajAdresata();
adresatMenager.dodajAdresata();

return 0;
}
