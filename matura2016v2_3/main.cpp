#include <iostream>
#include <fstream>
#include <sstream>
#include <math.h>

using namespace std;

string linia;

string w1,w2;

char jeden_cezar(char w, int k){
    if(int(w + k) > 90){
        return int(w + k + 26);
    }else{
        return int(w + k);
    }
}
char jeden_cezar_opcja_2(char w, int k){
    if(int(w - k) <60){
        return int(w - k + 26);
    }else{
        return int(w - k);
    }
}

bool czy_cezar_zly(string w1, string w2){
    int k = abs(w1[0]-w2[0]);

    for(int i = 0; i < w1.length(); i++){
        if(jeden_cezar(w1[i], k) != w2[i] && jeden_cezar_opcja_2(w1[i], k)!= w2[i]){
            return true;
        }
    }

}

int main()
{
    fstream zad;
    zad.open("dane_6_3.txt", ios::in);

    while(!zad.eof()){
        getline(zad, linia);
        stringstream sString(linia);
        sString>>w1;
        sString>>w2;

        //if(czy_cezar_zly(w1,w2)){
            //cout<<w1<<" "<<w2<<" zly"<<endl;
        //}

    }
    cout<<czy_cezar_zly("ZAWISLAK", "EFBNXQFP");
    zad.close();
    return 0;
}
