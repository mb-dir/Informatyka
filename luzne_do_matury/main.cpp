#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;
int a = 0;

int dl_liczby(int x){
    int s = 0;

    while(x){
        x/=10;
        s++;
    }
    return s;
}


int potega(int podstawa, int wykladnik){
    if(wykladnik == 0){
        return 1;
    }else{
        return potega(podstawa, wykladnik-1)*podstawa;
    }
}

void to_dec(int a, int system){
    int dl = dl_liczby(a);
    int dl_temp = dl;
    int tab_potegi[dl];
    for(int i = 0; i < dl; i++){
        tab_potegi[i] = potega(system, dl_temp-1);
        dl_temp--;
    }
    for(int i = 0; i < dl; i++){
        cout<<tab_potegi[i]<<endl;
    }




    //rozbijane liczby na cyfry

    int tab_cyfry[dl];
    int a_temp = a;
    int dl_temp2 = dl-1;

    while(a_temp){
        tab_cyfry[dl_temp2] = a_temp%10;
        dl_temp2--;
        a_temp/=10;
    }
    for(int i = 0; i < dl; i++){
        cout<<tab_cyfry[i]<<endl;
    }
}

int main()
{
    to_dec(2021, 3);
    return 0;
}
