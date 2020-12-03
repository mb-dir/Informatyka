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
==>>ksiazka Hobbit = {"Hobbit","Rolingston",1967,39.99};
    return 0;
}
****************************************************************


#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

// deklaracja struktury
struct osoba {
    string imie;
    string nazwisko;
    int wiek;
};

int main()
{
    osoba uczniowie[5]; // tablica ze struktury

    for (int i = 0; i<5; i++)
    {
        // pobieramy dane
        cout << "Podaj imie ucznia nr : " << i+1 << endl;
        cin >> uczniowie[i].imie;
    }

    for (int i = 0; i<5; i++)
    {
        // wyœwietlamy tablicê
        cout << uczniowie[i].imie << endl;
    }

    system("pause >nul");

    return 0;
}

ksiazka Hobbit = {"Hobbit","Rolingston",1967,39.99};
