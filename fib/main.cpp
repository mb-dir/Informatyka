#include <iostream>
#include <math.h>
using namespace std;
int liczba_do_sprawdzenia;

//rekurencyjnie
int fib_rek(int n){
    if(n < 3){
        return 1;
    }else{
        return fib_rek(n-2)+fib_rek(n-1);
    }
}
//iteracja
int fib_iteracyjnie(int ktory){
    int a = 0 ,b = 1;
    for(int i = 1; i < ktory; i++){
        b+=a;
        a=b-a;
    }
    return b;
}

//fibonaci iteracyjnie - sprawdzenie czy dana liczba nale¿y do ci¹gu
//funkcja pomocnicza
bool isPerfectSquare(int x){
    int s = sqrt(x);

    return (x%s == 0);
}

void czy_nalezy(int liczba){
   if((isPerfectSquare((5 * liczba * liczba) - 4)) || (isPerfectSquare((5 * liczba * liczba) + 4))){
    cout<<"Liczba: "<<liczba<<" nalezy";
   }else{
    cout<<"Nie, liczba: "<<liczba<<" nie nalezy";
   }
}
int main()
{
    /*for(int i = 1; i <=20; i++){
        int t = fib_iteracyjnie(i);
        cout<<"iteracyjnie element: "<<i<<" to: "<<t<<endl;
        cout<<"rekurencynie element: "<<i<<" to: "<<fib_rek(i)<<endl;
    }*/

    cout<<"Podaj liczbe, a program sprawdzi czy jest ona z ciagu: ";
    cin>>liczba_do_sprawdzenia;

    czy_nalezy(liczba_do_sprawdzenia);
    return 0;
}
