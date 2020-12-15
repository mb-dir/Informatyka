#include <iostream>
#include <string.h>
#include <fstream>
#include <stdio.h>


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
    cin.ignore();

    cout<<"Podaj tytul: ";
    cin>>tytul;
    cin.ignore();

    cout<<"Podaj rok wydania: ";
    cin>>rok_wydania;
    cin.ignore();

    cout<<"Podaj wydawnictwo: ";
    cin>>wydawnictwo;
    cin.ignore();

    cout<<"Podaj cene: ";
    cin>>cena;
    cin.ignore();



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

    cout<<"*******************BIBLIOTEKA********************"<<endl;

    int i=0;
    string tytul;
    fstream ksiazki;
    ksiazki.open("./biblioteka/stan.txt", ios::in);


    while(!ksiazki.eof()){
        getline(ksiazki, tytul);
        if(tytul != ""){
            i++;
            cout<<"Ksiazka nr "<<i<<" ma tytul: "<<tytul<<endl;
        }
    }

    ksiazki.close();
}

void pokaz_dokladne_info_o_ksiazce(){

    cout<<"*******************DOKLADNE INFORMACJE********************"<<endl;

    string linia, tytul;
    fstream ksiazka_info;

    cout<<"Podaj interesujacy cie tytul: ";
    cin>>tytul;
    cin.ignore();

    ksiazka_info.open("./biblioteka/"+tytul+".txt", ios::in);
    if(!ksiazka_info.good()){
        cout<<"Brak ksiazki o podanym tytule"<<endl;
        return;
    }
    while(!ksiazka_info.eof()){
        getline(ksiazka_info, linia);
        cout<<linia<<endl;
    }

    ksiazka_info.close();
}

void usun(){
    string tytul, linia, linia1;
    cout<<"Podaj tytul: ";
    cin>>tytul;
    cin.ignore();

    fstream ksiazki_stan_nowy;
    fstream ksiazki_stan1;
    fstream ksiazki_stan;
    ksiazki_stan.open("./biblioteka/stan.txt", ios::in);
    ksiazki_stan1.open("./biblioteka/stan1.txt", ios::out);
    while(!ksiazki_stan.eof()){
        getline(ksiazki_stan, linia);


        if(!(linia == tytul)){
            ksiazki_stan1<<linia<<endl;
        }

    }

    ksiazki_stan.close();
    ksiazki_stan1.close();


    remove("./biblioteka/stan.txt");

    ksiazki_stan_nowy.open("./biblioteka/stan.txt", ios::out);
    ksiazki_stan1.open("./biblioteka/stan1.txt", ios::in);

    while(!ksiazki_stan1.eof()){
        getline(ksiazki_stan1, linia1);
        ksiazki_stan_nowy<<linia1<<endl;
    }

    ksiazki_stan1.close();

    remove("./biblioteka/stan1.txt");

    ksiazki_stan_nowy.close();

    string s = "./biblioteka/"+tytul+".txt";

    remove(s.c_str());

}

void menu(){
    int x = 0;
    while(x>>5 || x<1){
        cout<<"*******************MENU - Pamietaj aby przy wprowadzaniu danych znak spacji zastapic _********************"<<endl;
        cout<<"1.Dodaj ksiazke"<<endl;
        cout<<"2.Pokaz biblioteke"<<endl;
        cout<<"3.Pokaz dokladne informacje"<<endl;
        cout<<"4.Usun"<<endl;
        cout<<"5.Zakoncz"<<endl;
        cout<<"Wybieram : ";
        cin>>x;
        cin.ignore();
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
        case 3:
           pokaz_dokladne_info_o_ksiazce();
           menu();
        break;
        case 4:
           usun();
           menu();
        break;
        case 5:
           exit(0);
        break;

    }
}

int main(){

    menu();

    getchar();
    getchar();
    return 0;
}
