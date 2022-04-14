#ifndef ADRESAT_H
#define ADRESAT_H

#include <iostream>

using namespace std;

class Adresat {
    int id;
    int idUzytkownika;
    string imie;
    string nazwisko;
    string numerTelefonu;
    string email;
    string adres;

public:
    void ustawId(int ID);
    void ustawIdUzytkownika(int IDUZYTKOWNIKA);
    void ustawImie(string IMIE);
    void ustawNazwisko(string NAZWISKO);
    void ustawNumerTelefonu(string NUMERTEL);
    void ustawEmail(string EMAIL);
    void ustawAdres(string ADRES);

    int pobierzId();
    int pobierzIdUzytkownika();
    string pobierzImie();
    string pobierzNazwisko();
    string pobierzNumerTelefonu();
    string pobierzEmail();
    string pobierzAdres();
};
#endif
