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


    ksiazka Hobbit; //tworzenie obiektu struktury o nazwie Hobbit;

    Hobbit.tytul = tytul;
    Hobbit.autor = autor;
    Hobbit.rokwydania = rok_wydania;
    Hobbit.wydawnictwo = wydawnictwo;
    Hobbit.cena = cena;

    cout << "Cena ksiazki to: "<< Hobbit.cena<< endl;
    return 0;
}


