#include "AdresatMenager.h"

int AdresatMenager::dodajAdresata()
{
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata();

    adresaci.push_back(adresat);
    plikzAdresatami.dopiszAdresataDoPliku(adresat);

    return idOstatniegoAdresata;
}


Adresat AdresatMenager::podajDaneNowegoAdresata()
{
    Adresat adresat;
    string imie, nazwisko, nrTelefonu, email, adres;

    adresat.ustawId(++idOstatniegoAdresata);
    adresat.ustawIdUzytkownika(ID_ZALOGOWANEGO_UZYTKOWNIKA);

    cout << "Podaj imie: ";
    cin >> imie;
    adresat.ustawImie(MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(imie));

    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    adresat.ustawNazwisko(MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(nazwisko));

    cout << "Podaj numer telefonu: ";
    cin >> nrTelefonu;
    adresat.ustawNumerTelefonu(nrTelefonu);

    cout << "Podaj email: ";
    cin >> email;
    adresat.ustawEmail(email);

    cout << "Podaj adres: ";
    cin >> adres;
    adresat.ustawAdres(adres);

    return adresat;
}

void AdresatMenager::wyswietlAdresatowZalogowanegoUzytkownika(){
    for (int i = 0; i < adresaci.size(); i++){
        cout << adresaci[i].pobierzId() << endl;
        cout << adresaci[i].pobierzIdUzytkownika() << endl;
        cout << adresaci[i].pobierzImie() << endl;
        cout << adresaci[i].pobierzNazwisko() << endl;
        cout << adresaci[i].pobierzEmail() << endl;
        cout << adresaci[i].pobierzNumerTelefonu() << endl;
        cout << adresaci[i].pobierzAdres() << endl;
    }
    system("pause");

}

void AdresatMenager::czyszczenieWektoraAdresaci(){
adresaci.clear();
}


