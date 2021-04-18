#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;

struct galeria{
    string skrot;
    string miasto;
    int wymiary[140];
};

string linia, skrot, miasto;

int tab_wymiary[140];

galeria galerie[50];



//funkcje do zad nr 1
int pierwsze_wystapienie(string a, string* tab, int poczatek = 0){
    //wiemy, ze do 50
    for(int i = poczatek; i < 50; i++){
       if(a == tab[i]){
            return i;
       }
    }
}

int ostatnie_wystapienie(string a, string* tab, int poczatek = 0){
    //wiemy, ze do 50
    for(int i = poczatek; i <= 50; i++){
       if(a != tab[i]){
            return i;
       }
    }
}

//zad2
int pole(int* tab){
    int l = 0;
    int ile_galerii = 0;

    for(int i = 0; i < 140; i+=2){
        int a = tab[i]*tab[i+1];
        l+=a;

        if(tab[i] != 0){
            ile_galerii++;
        }
    }
    return l;
}
int ile_galerii(int* tab){
    int ile_galerii = 0;

    for(int i = 0; i < 140; i+=2){
        if(tab[i] != 0){
            ile_galerii++;
        }
    }
    return ile_galerii;
}

int main()
{
    fstream dane;

    dane.open("./galerie.txt", ios::in);


    int j = 0;
    while(!dane.eof()){
        getline(dane, linia);

        stringstream sString(linia);

        sString>>skrot;
        sString>>miasto;

        galeria galeria_zapis;

        galeria_zapis.skrot = skrot;
        galeria_zapis.miasto = miasto;

        for(int i = 0; i < 140; i++){
            sString>>galeria_zapis.wymiary[i];
        }
        galerie[j] = galeria_zapis;
        j++;
    }
    dane.close();


    //zad 1

    string skrot_kopia[50];

    for(int i = 0; i < 50; i++){
        skrot_kopia[i] = galerie[i].skrot;
    }

    sort(skrot_kopia, skrot_kopia+50);


    for(int i = 0; i < 50; i++){
        //cout<<skrot_kopia[i]<<endl;
    }

    cout<<endl;
    int temp = 0;

    fstream wynik1;
    wynik1.open("wynik1.txt", ios::out);

    for(int i = 0; i < 20; i++){
        wynik1<<skrot_kopia[temp]<<": "<<ostatnie_wystapienie(skrot_kopia[temp], skrot_kopia, temp) - pierwsze_wystapienie(skrot_kopia[temp], skrot_kopia, temp)<<endl;
        temp = ostatnie_wystapienie(skrot_kopia[temp], skrot_kopia, temp);
    }

    wynik1.close();


    //zad2
    int max_galeria = 0;
    string max_nazwa;

    int min_galeria = 10000000;
    string min_nazwa;

    fstream wyniki2;
    wyniki2.open("wynik_2.txt", ios::out);


    for(int  i = 0; i < 50; i++){

        if(pole(galerie[i].wymiary) > max_galeria){
            max_galeria = pole(galerie[i].wymiary);
            max_nazwa = galerie[i].miasto;
        }
        if(pole(galerie[i].wymiary) < min_galeria){
            min_galeria = pole(galerie[i].wymiary);
            min_nazwa = galerie[i].miasto;
        }
        wyniki2<<galerie[i].miasto<<": "<<pole(galerie[i].wymiary)<<" - "<<ile_galerii(galerie[i].wymiary)<<endl;

    }
    wyniki2<<"MAX: "<<max_nazwa<<": "<<max_galeria<<endl;
    wyniki2<<"MIN: "<<min_nazwa<<": "<<min_galeria<<endl;

    wyniki2.close();

    return 0;
}
