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


    int ilosc_wystapien = 1;
    for(int i = 0; i < 49; i++){

        if(skrot_kopia[i] == skrot_kopia[i+1]){

        }

        cout<<skrot_kopia[i]<<endl;
    }

    return 0;
}
