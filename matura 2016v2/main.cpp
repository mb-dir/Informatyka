#include <iostream>
#include <fstream>

using namespace std;

string linia_zad1;

void cezar(string a){
    int k = 107%26;
    for(int i = 0; i < a.length(); i++){
        if(int(a[i]) > 87){
            a[i] = a[i]+k-26;
        }else{
            a[i] = a[i]+3;
        }
    }
    cout<<a;
}

int main()
{
    fstream zad;
    zad.open("./dane_6_1.txt", ios::in);

    while(!zad.eof()){
        getline(zad, linia_zad1);
        //cout<<linia_zad1<<endl;
    }

    zad.close();

    cezar("INTERPRETOWANIEXYZ");
    return 0;
}
