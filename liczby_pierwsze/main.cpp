#include <iostream>
#include <math.h>
using namespace std;

bool czy_pierwsza(int liczba){
    if(liczba < 2){
        return false;
    }else{
        for(int i = 2; i <= sqrt(liczba); i++){
            if(liczba % i == 0){
                return false;
            }
        }
        return true;
    }
}

int main()
{
    for(int i = 3; i < 10; i++){
        if(czy_pierwsza(i)){
           cout<<"liczba "<<i<<" jest pierwsza"<<endl;
        }else{
            cout<<"liczba "<<i<<" nie jest pierwszaa"<<endl;
        }
    }
    return 0;
}
