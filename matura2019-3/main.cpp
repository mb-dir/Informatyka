#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;
string linia;
string liczby_temp[500];

int liczby_tab[500];

int nwd(int a, int b){
    while(a!=b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a;
}

int max_dzielnik(int a){
    int maxD;
    for(int i = 2; i <=a; i++){
        if(a%i == 0){
            maxD = i;
        }
    }
    return maxD;
}

int main()
{
    fstream liczby;
    liczby.open("./liczby.txt", ios::in);
    int i = 0;
    while(!liczby.eof()){
        getline(liczby, linia);
        liczby_temp[i] = linia;
        i++;
    }
    liczby.close();

    for(int  i = 0; i < 500; i++){
        liczby_tab[i] = std::stoi(liczby_temp[i]);
    }

    int dl = 0;
    int dlMax=0;
    int koniec;
    int maxL;


    for(int  i = 0; i < 499; i+=2){
        if(nwd(nwd(liczby_tab[i], liczby_tab[i+1]), liczby_tab[i+1])!=1){
            dl+=2;
        }else{
            if(dl>dlMax){
                koniec = i;
                dlMax = dl;
            }
            dl=0;
        }
    }
    //cout<<liczby_tab[koniec-150];

    int tab_max[150];
    for(int i = koniec-150, j = 0; i < koniec; i++, j++){
        tab_max[j] = liczby_tab[i];
    }

    int maxD = 0;
    for(int i = 0; i < 150; i++){
        if(max_dzielnik(tab_max[i])> maxD){
            maxD = max_dzielnik(i);
        }
    }
    //cout<<max_dzielnik(tab_max[0])<<endl;

    //wszystkie dzielniki tej liczby i potem sprawdzanie na pale
    //cout<<tab_max[0];
    int pierwsza_w_ciagu = tab_max[0];

    sort(tab_max, tab_max+150);

    //dzielniki 74(najmniejszej liczby z tego przedzialu)
    int tab_dzielniki[3] = {74,37,2};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 150; j++){
            if(tab_max[j] % tab_dzielniki[i] != 0){
                //nigdy sie niespelnia - wszystkie te liczby sa dzielnikami kazdej z liczb, 74 jest max
                cout<<tab_dzielniki[i]<<" jest zle dla "<<tab_max[j]<<endl;
            }
        }
    }

    fstream wynik;

    wynik.open("./wynik.txt", ios::out);
    wynik<<pierwsza_w_ciagu<<" "<<dlMax<<" "<<tab_dzielniki[0]<<endl;


    wynik.close();
    return 0;
}
