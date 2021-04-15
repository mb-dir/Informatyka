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

    for(int i = 0; i < 50; i++){
        cout<<galerie[i].wymiary[1]<<endl;
    }
    return 0;
}
