#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int tab[20000], i=0;

bool czy_punkt_nalezy_do_kola(int x, int y){
    int r = 200, sx=200, sy=200;//to co wiemy z tresci zadania

    int warunek = ((x-sx)*(x-sx)+(y-sy)*(y-sy));
    if(warunek <= r*r){
        return true;
    }else{
        return false;
    }
}

int main()
{
    fstream punkty;
    string wspolrzedna;
    string x,y;

    punkty.open("./punkty.txt", ios::in);

    while(!punkty.eof()){
        getline(punkty,wspolrzedna);
        stringstream sString(wspolrzedna);
        sString >> x;
        sString >> y;

        tab[i]=std::stoi(x);
        i++;
        tab[i]=std::stoi(y);
        i++;
    }

    punkty.close();

    //tab[19999]; - to ostatnia wspó³rzedna z pliku
    return 0;
}
