#include <iostream>
#include<bits/stdc++.h>
using namespace std;
float a,b,c;
int main()
{
    cin>>a>>b>>c;

    if(a == 0){
        int x = (c-b)/a;
        if(x && a*x + b == c){
            cout<<"NWR";
        }else{
            cout<<"BR";
        }
    }else{
        cout << fixed << setprecision(2) << (c-b)/a;
    }

    return 0;
}
