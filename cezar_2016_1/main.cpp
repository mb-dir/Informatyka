#include <iostream>
#include <fstream>

using namespace std;

string slowo;

string cezar(string s){
    int k=107%26;//26 liter ma alfabet

    for(int i = 0; i <= s.length() - 1; i++){
        if(s[i]+k > 90){
            s[i] = s[i]+k-26;
        }else{
            s[i] = (s[i]+k);
        }
    }

    return s;
}

int main()
{
    fstream dane_1;
    fstream wynik_1;

    dane_1.open("./dane_6_1.txt", ios::in);
    wynik_1.open("./wyniki_6_1.txt", ios::out);

    while(!dane_1.eof()){
        getline(dane_1, slowo);

        wynik_1<<cezar(slowo)<<endl;
    }

    dane_1.close();
    wynik_1.close();
    return 0;
}
