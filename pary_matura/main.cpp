#include <iostream>
#include <fstream>
#include <sstream>
#include <math.h>

using namespace std;

string s;
int liczby[100];
int i = 0;
string wyrazy[100];

bool czy_pierwsza(int a){
    if(a == 1){
        return false;
    }
    for(int i = 2; i <= sqrt(a); i++){
        if(a%i == 0){
            return false;
        }
    }
    return true;
}

void hipotezaG(int a){
    fstream wyniki;
    int maxr = 0;
    int r = 0;
    int para_liczb[2];

    if((a > 4) && (a %2 == 0)){
        for(int i = 3; i <= a/2; i+=2){
            if(czy_pierwsza(i) && czy_pierwsza(a-i)){
                r=abs(i- (a-i));
                if(r >= maxr){
                    maxr = r;
                    para_liczb[0] = i;
                    para_liczb[1] = a-i;
                }
            }
        }
        wyniki.open("./wyniki4.txt", ios::out | ios::app);
        wyniki<<a<<" "<<para_liczb[0]<<" "<<para_liczb[1]<<endl;
        wyniki.close();
    }

}


//zad2

void zad2(string s){
    s+="1";
    string ciag = "";
    string ciagT = "";


    int dlT = 1;
    int dlMax = 1;

    for(int i = 0; i < s.length()-1; i++){
        if(s[i] == s[i+1]){
            ciagT+=s[i];
            dlT++;
        }else{
            if(dlT>dlMax){
               ciag = ciagT;
               dlMax = dlT;
            }
            dlT = 1;
            ciagT="";
        }
    }

    if(dlMax == 1){
        ciag = s[0];
    }else{
        ciag+=ciag[0];
    }

    fstream wyniki2;
    wyniki2.open("./wyniki4.2.txt", ios::out | ios::app);
    wyniki2<<ciag<<" "<<dlMax<<endl;
    wyniki2.close();
    //cout<<ciag<<" "<<dlMax<<endl;
}
int main()
{
    fstream pary;

    pary.open("./pary.txt", ios::in);

    while(!pary.eof()){
        getline(pary, s);
        stringstream sString(s);
        sString >> liczby[i];
        sString >> wyrazy[i];

        hipotezaG(liczby[i]);

        i++;
    }

    pary.close();


    //zad2
    for(int i = 0; i <100; i++){
        zad2(wyrazy[i]);
    }

    return 0;
}
