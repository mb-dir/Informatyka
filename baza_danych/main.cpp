#include <iostream>
#include <string.h>
#include <fstream>
#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>


using namespace std;

// deklaracja struktury
struct ksiazka {
    string autor;
    string tytul;
    int rokwydania;
    string wydawnictwo;
    float cena;
};

void zmien_stan_biblioteki(string tytul){
    fstream stan_biblioteki;
    stan_biblioteki.open("./biblioteka/stan.txt", ios::out | ios::app);
    stan_biblioteki<<tytul<<endl;
    stan_biblioteki.close();
}

void dodaj_ksiazke(){

    string autor, tytul, wydawnictwo;
    int rok_wydania;
    float cena;

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

    fstream nowa_ksiazka;

    nowa_ksiazka.open("./biblioteka/"+tytul+".txt", ios::out);

    nowa_ksiazka<<"Tytul: "<<moja_ksiazka.tytul<<endl;
    nowa_ksiazka<<"Autor: "<<moja_ksiazka.autor<<endl;
    nowa_ksiazka<<"Rok wydania: "<<moja_ksiazka.rokwydania<<endl;
    nowa_ksiazka<<"Wydawnictwo: "<<moja_ksiazka.wydawnictwo<<endl;
    nowa_ksiazka<<"Cena: "<<moja_ksiazka.cena<<endl;

    nowa_ksiazka.close();


    //aktualizuj stan biblioteki
    zmien_stan_biblioteki(tytul);
}

void pokaz_ksiazki(){
    int i=0;
    string tytul;
    fstream ksiazki;
    ksiazki.open("./biblioteka/stan.txt", ios::in);


    while(!ksiazki.eof()){
        getline(ksiazki, tytul);
        if(tytul != ""){
            i++;
            cout<<"Ksiazka nr "<<i<<" ma tytul: "<<tytul<<endl;
        }else{
            break;
        }
    }

    ksiazki.close();
}

void menu(){
    int x = 0;
    while(x>2 || x<1){
        cout<<"*******************MENU********************"<<endl;
        cout<<"1.Dodawaj ksiazke"<<endl;
        cout<<"2.Pokaz biblioteke"<<endl;
        cout<<"Wybieram : ";
        cin>>x;
        system("cls");
     }

    switch (x){
       case 1:
           dodaj_ksiazke();
           menu();
        break;
       case 2:
           pokaz_ksiazki();
           menu();
        break;

    }
}

int main(){

    menu();

    getchar();
    getchar();
    return 0;
}
