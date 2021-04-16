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
    for(int i = poczatek; i < 50; i++){
       if(a != tab[i]){
            return i;
       }
    }
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
   string test[10] = {"A","A","A","B","C","C","C","C","G","G"};

   cout<<pierwsze_wystapienie("C", test)<<endl;
   cout<<ostatnie_wystapienie("C", test, 4)<<endl;

    return 0;
}
