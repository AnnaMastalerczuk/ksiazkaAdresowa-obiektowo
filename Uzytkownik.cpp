#include "Uzytkownik.h"

void Uzytkownik::ustawId(int ID){
id = ID;
}

void Uzytkownik::ustawLogin(string LOGIN){
login = LOGIN;
}

void Uzytkownik::ustawHaslo(string HASLO){
haslo = HASLO;
}

int Uzytkownik::pobierzId(){
return id;
}

string Uzytkownik::pobierzLogin(){
return login;
}

string Uzytkownik::pobierzHaslo(){
return haslo;
}
