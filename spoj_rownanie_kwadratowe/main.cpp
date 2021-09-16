#include <iostream>

using namespace std;

void solve(float a, float b, float c){
    float delta = (b*b)-(4*a*c);
    if(delta < 0){
        cout<<0<<endl;
    }else if(delta > 0){
        cout<<2<<endl;
    }else{
        cout<<1<<endl;
    }
}
float a,b,c;
int main()
{
    while (cin >> a >> b >> c){
        solve(a,b,c);
    }


    return 0;
}
