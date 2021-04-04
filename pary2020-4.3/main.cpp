#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;

int l[100];
string s[100];
int i = 0;

string linia;

bool dlugosc(int a, string w){
    if(a == w.length()){
        return true;
    }else{
        return false;
    }
}

int main()
{
    fstream pary;
    pary.open("./pary.txt", ios::in);
    while(!pary.eof()){
        getline(pary, linia);
        stringstream sString(linia);
        sString>>l[i];
        sString>>s[i];
        i++;
    }
    pary.close();

    string tab_pomo[6];
    int j=0;
    fstream plik_pomo;
    plik_pomo.open("./pomo.txt", ios::out);
    for(int i = 0; i < 100; i++){
            //pewnosc ze w pomocniczym pliku jest to co nas interesuje(spelnia wymogi zadania)
        if(dlugosc(l[i], s[i])&&l[i]==3){
            plik_pomo<<l[i]<<" "<<s[i]<<endl;
            tab_pomo[j]=s[i];
            j++;
        }
    }
    plik_pomo.close();

    for(int i = 0; i < 6; i++){
        cout<<tab_pomo[i]<<endl;
    }
    cout<<"---------------------------"<<endl;
    //posortowane
    sort(tab_pomo, tab_pomo+6);
    for(int i = 0; i < 6; i++){
        cout<<tab_pomo[i]<<endl;
    }
    return 0;
}
