#include <iostream>
#include <string.h>

using namespace std;

string autor, tytul, wydawnictwo;
int rok_wydania;
float cena;

// deklaracja struktury
struct ksiazka {
    string autor;
    string tytul;
    int rokwydania;
    string wydawnictwo;
    float cena;
};

int main()
{
    cout<<"Podaj autora: ";
    cin>>autor;

    cout<<"Podaj tytul: ";
    cin>>tytul;

    cout<<"Podaj rok wydania: ";
    cin>>rok_wydania;

    cout<<"Podaj wydawnictwo: ";
    cin>>wydawnictwo;

    cout<<"Podaj cene: ";
    cin>>cena;

    cout<<endl;

    ksiazka moja_ksiazka;

    moja_ksiazka.tytul = tytul;
    moja_ksiazka.autor = autor;
    moja_ksiazka.rokwydania = rok_wydania;
    moja_ksiazka.wydawnictwo = wydawnictwo;
    moja_ksiazka.cena = cena;

    cout << "Tytul ksiazki to: "<< moja_ksiazka.tytul<< endl;
    cout << "Autor ksiazki to: "<< moja_ksiazka.autor<< endl;
    cout << "Rok wydania ksiazki to: "<< moja_ksiazka.rokwydania<< endl;
    cout << "Wydawnictwo ksiazki to: "<< moja_ksiazka.wydawnictwo<< endl;
    cout << "Cena ksiazki to: "<< moja_ksiazka.cena<< endl;
    return 0;
}
