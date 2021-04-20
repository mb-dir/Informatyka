#include <iostream>
#include <fstream>

using namespace std;

string linia_zad1;

string cezar(string a){
    int k = 107%26;
    for(int i = 0; i < a.length(); i++){
        if(int(a[i]) > 87){
            a[i] = a[i]+k-26;
        }else{
            a[i] = a[i]+3;
        }
    }
    return a;
}

int main()
{
    fstream zad;
    fstream zad_wyniki;
    zad.open("./dane_6_1.txt", ios::in);
    zad_wyniki.open("./dane_6_1_wynik.txt", ios::out);

    while(!zad.eof()){
        getline(zad, linia_zad1);
        zad_wyniki<<cezar(linia_zad1)<<endl;
    }

    zad.close();
    zad_wyniki.close();

    cout<<cezar("INTERPRETOWANIEXYZ");
    return 0;
}
