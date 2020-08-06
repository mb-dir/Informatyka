#include <iostream>

using namespace std;
//Funkcja nr 1
int f(int a){
    if(a == 0){
        return 3;
    }else{
        return f(a-1)+2;
    }
}
//Funkcja nr 2 - potegowanie
long int potegowanie(int podstawa, int wykladnik){
    if(wykladnik == 0){
        return 1;
    }else{
        return potegowanie(podstawa, wykladnik - 1) * podstawa;
    }
}
//Funkcja nr 2a - potêgowanie iteracja
int potegowanie_iteracja(int podstawa, int wykladnik){
    int a = 1;
        for(int i =  0; i < wykladnik; i++){
            a*=podstawa;
       }
    return a;
}
int main()
{
    for(int i = 0; i < 10; i++){
        cout<<potegowanie(5, i)<<endl;
    }
    for(int i = 0; i < 10; i++){
        cout<<potegowanie_iteracja(5, i)<<endl;
    }
    return 0;
}
