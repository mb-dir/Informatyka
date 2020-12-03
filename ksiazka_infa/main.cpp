#include <iostream>
#include <string.h>

using namespace std;

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
    ksiazka Hobbit; //tworzenie obiektu struktury o nazwie Hobbit;

    Hobbit.tytul = "Hobbit";
    Hobbit.autor = "Rolingston";
    Hobbit.rokwydania = 1967;
    Hobbit.wydawnictwo = "Amber";
    Hobbit.cena = 39,99;

    cout << "Cena ksiazki to: "<< Hobbit.cena<< endl;
    return 0;
}


