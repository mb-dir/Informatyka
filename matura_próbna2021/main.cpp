#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

struct galeria{
    string skrot;
    string miasto;
    int wymiary[140];
};

string linia, skrot, miasto;

int tab_wymiary[140];

int main()
{
    fstream dane;

    dane.open("./galerie.txt", ios::in);

    do{
        getline(dane, linia);

        stringstream sString(linia);

        sString>>skrot;
        sString>>miasto;
        for(int i = 0; i < 140; i++){
            sString>>tab_wymiary[i];
        }
        cout<<linia<<endl;
    }while(0);

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<skrot<<" "<<miasto;

    for(int i = 0; i < 140; i++){
        cout<<tab_wymiary[i]<<endl;
    }

    dane.close();
    return 0;
}
