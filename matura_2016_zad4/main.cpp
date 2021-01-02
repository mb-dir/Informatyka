#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;


//zad1
int tabX[10000], tabY[10000];

bool czy_punkt_nalezy_do_kola(int x, int y){
    int r = 200, sx=200, sy=200;//to co wiemy z tresci zadania

    int warunek = ((x-sx)*(x-sx)+(y-sy)*(y-sy));
    if(warunek < 40000){
        return true;
    }else{
        return false;
    }
}

bool czy_punkt_nalezy_do_brzegu_kola(int x, int y){
    int r = 200, sx=200, sy=200;//to co wiemy z tresci zadania

    int warunek = ((x-sx)*(x-sx)+(y-sy)*(y-sy));
    if(warunek == 40000){
        return true;
    }else{
        return false;
    }
}


//zda2


int main()
{
    //zad1
    fstream punkty;
    string wspolrzedna;
    string x,y;

    punkty.open("./punkty.txt", ios::in);

    int i = 1;
    while(!punkty.eof()){
        getline(punkty,wspolrzedna);
        stringstream sString(wspolrzedna);
        sString >> x;
        sString >> y;

        tabX[i]=std::stoi(x);
        tabY[i]=std::stoi(y);
        i++;
    }

    punkty.close();

    //tab[19999]; - to ostatnia wspó³rzedna z pliku

    int ilosc = 0;
    for(int i = 0; i<10000; i++){
        if(czy_punkt_nalezy_do_brzegu_kola(tabX[i], tabY[i])){
            cout<<"Punkt: ("<<tabX[i]<<","<<tabY[i]<<") nalezy do brzegu okregu"<<endl;
        }else if(czy_punkt_nalezy_do_kola(tabX[i], tabY[i])){
            ilosc+=1;
        }
    }
    cout<<ilosc<<endl;
    float nkn1 = (float)ilosc/(float)2500;


    cout<<"ZAD2"<<endl;
    std::cout << std::setprecision(5) << nkn1 << '\n';
    return 0;
}
