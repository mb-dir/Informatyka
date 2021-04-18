#include <iostream>
#include <algorithm>

using namespace std;

string tab[10] = {"C","A","C","C","A","A","G","J","G","C"};

int pierwsze_wystapienie(string a, string* tab, int dl){
    for(int i = 0; i < dl; i++){
        if(a == tab[i]){
            return i;
        }
    }
}

int ostatnie_wystapienie(string a, string* tab, int dl){
    for(int i = dl-1; i >= 0; i--){
        if(a == tab[i]){
            return i;
        }
    }
}

int ileWystapien(string* dane, int dl, string a) {
    int licznik = 0;
    for (int i = 0; i < dl; i++) {
        if (dane[i] == a) {
            licznik++;
        }
    }
    return licznik;
}

int main()
{
    int temp = 0;

    while(true){
        cout<<tab[i]<<": "<<ileWystapien(tab, 10, tab[temp])<<endl;
        temp = ileWystapien(tab, 10, tab[i]);
    }
    for(int i = 0; i < 10; i++){
         cout<<tab[i]<<": "<<ileWystapien(tab, 10, tab[temp])<<endl;
         temp = ileWystapien(tab, 10, tab[i]);
    }

    //cout << "Przed sortowaniem" << endl;
    for(int i = 0; i < 10; i ++){
        //cout<<tab[i]<<" ";
    }
    sort(tab, tab+10);
    cout<<endl;
    //cout<<"Po sortowaniu"<<endl;
    for(int i = 0; i < 10; i ++){
        //cout<<tab[i]<<" ";
    }
    cout<<endl;

    //cout<<pierwsze_wystapienie("J", tab, 10)<<endl;
    //cout<<ostatnie_wystapienie("J", tab, 10)<<endl;

    //cout<<"Ilosc wystapien to: "<<ostatnie_wystapienie("J", tab, 10)+1 - pierwsze_wystapienie("J", tab, 10);
    return 0;
}
