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

    for(int i = 0; i < d; i++){
        cin>>a>>b;

        if(b >= 10){
            if(a > 10){
                cout<<a%10<<endl;
            }else if(a < 10){
                cout<<a<<endl;
            }else{
                cout<<0;
            }
        }else{
            int x = potegowanie(a,b);
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
