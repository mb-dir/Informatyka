#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int liczba;

bool czy_pierwsza(int a){
    if(a<=3){
      return true;
    }else{
        for(int i = 2; i<= sqrt(a); i++){
            if(a%i == 0){
                return false;
            }
        }
        return true;
    }
}

int czy_pierwiastek_jest_liczba_pierwsza(int a){
    float pierwiastekFLOAT = sqrt(a);
    int pierwiastekINT = sqrt(a);

    if(pierwiastekFLOAT == pierwiastekINT){
       if(czy_pierwsza(pierwiastekINT)){
        return true;
       }else{
        return false;
       }
    }else{
        return false;
    }
}

int main()
{
    cout << "Podaj liczbe" << endl;
    cin>>liczba;

    if(czy_pierwiastek_jest_liczba_pierwsza(liczba)){
        cout<<"jd";
    }

    getchar();
    getchar();
    return 0;
}
