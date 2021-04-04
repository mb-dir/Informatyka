#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int l[100];
string s[100];
int i = 0;

string linia;

void dlugosc(int a, string w){
    if(a == w.length()){
        cout<<"OK";
    }else{
        cout<<"NIE";
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

    dlugosc(3,"jdds");
    return 0;
}
