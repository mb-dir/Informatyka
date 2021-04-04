#include <iostream>
#include <fstream>
#include <sstream>

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

    fstream plik_pomo;
    plik_pomo.open("./pomo.txt", ios::out);
    for(int i = 0; i < 100; i++){
        if(dlugosc(l[i], s[i])){
            plik_pomo<<l[i]<<" "<<s[i]<<endl;
        }
    }
    plik_pomo.close();
    return 0;
}
