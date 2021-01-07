#include <iostream>
#include <fstream>
#include <sstream>
#include <math.h>

using namespace std;

string cezar(string s, int klucz){
    int k = klucz % 26;
    for(int i = 0; i <= s.length()-1; i++){
        if(s[i] + k > 90){
            s[i] = s[i]+k-26;
        }else{
            s[i] = s[i]+k;
        }
    }

    return s;
}



bool czy_pasuje(string slowo, string szyfrogram){
    for(int i = 0; i <= 26; i++){
        if(cezar(slowo, i) == szyfrogram){
            return true;
        }
    }
    return false;

}

int main()
{

    fstream dane;
    string linia, slowo, szyfrogram;
    dane.open("./dane_6_3.txt", ios::in);

    while(!dane.eof()){
        getline(dane, linia);
        stringstream sString(linia);

        sString >> slowo;
        sString >> szyfrogram;

        if(czy_pasuje(slowo, szyfrogram)){

        }else{
            cout<<slowo<<" "<<szyfrogram<<endl;
        }

    }

    dane.close();


    getchar();
    getchar();
    getchar();
    return 0;
}
