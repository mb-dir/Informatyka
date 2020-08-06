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
//Funckja nr 3 - fibonaci
int fib(int a){
    if(a < 3){
        return 1;
    }else{
        return fib(a-1) + fib(a-2);
    }
}
//Funckja nr 3a - fibonaci iteracyjne
int fib_iteracyjne(int a){
    int x=0,y=1;
    for(int i = 1; i < a; i++){
        y+=x;
        x=y-x;
    }
    return y;
}
int main()
{
    //sprawdzenie potegowania
    for(int i = 0; i < 10; i++){
        cout<<potegowanie(5, i)<<endl;
    }
    for(int i = 0; i < 10; i++){
        cout<<potegowanie_iteracja(5, i)<<endl;
    }

    //sprawdzenie fibonaciego
    for(int i = 1; i <= 10; i++){
        cout<<"Wyraz nr: "<<i<<" to "<<fib(i)<<endl;
    }
    for(int i = 1; i <= 10; i++){
        cout<<"Wyraz nr: "<<i<<" to "<<fib_iteracyjne(i)<<endl;
    }
    return 0;
}
