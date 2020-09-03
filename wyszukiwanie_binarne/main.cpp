#include <iostream>

using namespace std;

//posortowany zbior elementow
int tab[10] = {3,4,5,8,10,12,14,16,18,19};

void wyszukiwanie_binarne(int* tab, int index_l, int index_p, int szukany){
    int srodek = (index_l+index_p)/2;

    if(index_l > index_p){
        cout<<"element "<<szukany<<" nieodnaleziony"<<endl;
        return;
    }

    if(tab[srodek] == szukany){
        cout<<"element "<<szukany<<" znajduje sie na miejscu o indexie: "<<srodek<<endl;
        return;
    }else if(szukany < tab[srodek]){
        wyszukiwanie_binarne(tab, 0, srodek-1, szukany);
    }
    else if(szukany > tab[srodek]){
        wyszukiwanie_binarne(tab, srodek+1, index_p, szukany);
    }
}

int main()
{
    for(int i = -1; i <=20; i++){
        wyszukiwanie_binarne(tab, 0, 9, i);
    }
    return 0;
}
