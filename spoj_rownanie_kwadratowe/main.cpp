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
int t;
int main()
{
    solve(-0.5, -0.5, 0);
    return 0;
}
