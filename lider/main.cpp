#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;


int n = 20;
int index_srodek_tab = n/2;
int tab[20];
int j = 0;

int main()
{
    //Wype³nienie tablicy
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        if(i%2 == 0){
            tab[i] = 7;
        }else{
            tab[i] = rand()%19+1;
        }
    }

    //Posortowanie tablicy
    sort(tab, tab+n);
    for(int i = 0; i < n; i++){
        if(tab[i] == tab[index_srodek_tab]){
            j++;
        }
    }

    cout<<"TABLICA PO POSORTOWANIU"<<endl;
    for(int i = 0; i < n; i++){
        if(i == 0){
            cout<<"["<<tab[i]<<", ";
        }else if (i != n-1){
            cout<<tab[i]<<", ";
        }else{
            cout<<tab[i]<<"]"<<endl;
            cout<<endl;
        }
    }


    if(j > index_srodek_tab){
        cout<<tab[index_srodek_tab]<<" jest liderem, a ciag ma dlugosc: "<<j<<endl;
    }else{
        cout<<tab[index_srodek_tab]<<" jest kandydatem na lidera, ale ciag jest zbyt krotki("<<j<<") - musi byc wiekszy od: "<<index_srodek_tab<<endl;
    }

    return 0;
}
