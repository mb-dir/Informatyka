#include <iostream>
#include <fstream>

using namespace std;

//Funkcja sprawdzajaca czy wyraz jest palindromem
bool czy_palindrom(string wyraz){
    for(int i = 0, j = wyraz.length()-1; i < j; i++, j--){
        if ((toupper(wyraz[i])) != (toupper(wyraz[j]))){
            return false;
        }
    }
    return true;
}

int main()
{

    cout<<"PROCES SPRAWDZANIA ZAKONCZONY";

    //zmienne otwieranie pliku
    string linia;
    fstream plik;
    //otworzenie pliku
    plik.open("slowa.txt", ios::in);


    while(!plik.eof())
    {
        getline(plik, linia);
        if(czy_palindrom(linia)){

            //zapis do pliku zad4.txt jesli slowo jest palindromem
            fstream plik_zapis;
            plik_zapis.open("zad4.txt",ios::out | ios::app);
            plik_zapis<<linia<<endl;

            plik_zapis.close();
        }
    }

    plik.close();

    return 0;
}
