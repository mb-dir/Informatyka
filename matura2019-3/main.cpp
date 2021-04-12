#include <iostream>
#include <fstream>

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
    cout<<liczby_tab[koniec-150];

    int tab_max[150];
    for(int i = koniec-150, j = 0; i < koniec; i++, j++){
        tab_max[j] = liczby_tab[i];
    }

    for(int i = 0; i < 150; i++){
        cout<<tab_max[i]<<endl;
    }
    return 0;
}
