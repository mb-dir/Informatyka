#include <iostream>

using namespace std;

long double potegowanie(int a, int b){
    if(b == 0){
        return 1;
    }else{
        return potegowanie(a, --b) * a;
    }
}

int d,a,b;

int main()
{
    cin>>d;

    int tab[2*d];

    for(int i = 0; i < 2*d; i+=2){
        cin>>a>>b;
        tab[i] = a;
        tab[i+1] = b;
    }


    for(int i = 0; i < 2*d; i+=2){
        if(tab[i+1] >= 10){
            if(tab[i] > 10){
                cout<<tab[i]%10<<endl;
            }else if(tab[i] < 10){
                cout<<tab[i]<<endl;
            }else{
                cout<<0;
            }
        }else{
            int x = potegowanie(tab[i],tab[i+1]);
            if(x > 10){
                cout<<x%10<<endl;
            }else if (x<10){
                cout<<x<<endl;
            }else{
                cout<<0;
            }
        }
    }
    return 0;
}
