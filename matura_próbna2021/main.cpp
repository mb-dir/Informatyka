#include <iostream>
#include <fstream>

using namespace std;

struct galeria{
    string skrot;
    string miasto;
    int wymiary[140];
};

string linia;

int main()
{
    fstream dane;

    dane.open("./galerie.txt", ios::in);

    while(!dane.eof()){
        getline(dane, linia);
        cout<<linia<<endl;
    }

    dane.close();
    return 0;
}
