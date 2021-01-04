#include <iostream>
#include <fstream>

using namespace std;

string slowo;

string cezar(string s){
    int k=107%26;//26 liter ma alfabet

    for(int i = 0; i <= s.length() - 1; i++){
        s[i] = (s[i]+k);
        if(s[i]+k > 90){
            s[i] = s[i]-26;
        }
    }

    return s;
}

int main()
{
    fstream dane_1;

    dane_1.open("./dane_6_1.txt", ios::in);

    while(!dane_1.eof()){
        getline(dane_1, slowo);
        cout<<slowo<<endl;
    }

    dane_1.close();

    return 0;
}
