#include <iostream>

using namespace std;


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
int main()
{
    for(int i = 1; i <=20; i++){
        int t = fib_iteracyjnie(i);
        cout<<"iteracyjnie element: "<<i<<" to: "<<t<<endl;
        cout<<"rekurencynie element: "<<i<<" to: "<<fib_rek(i)<<endl;
    }
    return 0;
}
