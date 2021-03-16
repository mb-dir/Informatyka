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
        cout<<wyrazy[i]<<endl;
    }


    return 0;
}
