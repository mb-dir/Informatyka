#include <iostream>

using namespace std;
int t;

void solve(char s, int a, int b){
    if( (int)s == 43 ){
        cout<<a+b<<endl;
    }else if((int)s == 45){
        cout<<a-b<<endl;
    }else if((int)s == 42){
        cout<<a*b<<endl;
    }else if((int)s == 47){
        cout<<a/b<<endl;
    }else{
        cout<<a%b<<endl;
    }
}
char sign;
int a,b;
int main()
{
    while(cin >> sign >> a >> b){
        solve(sign,a,b);
    }
    return 0;
}
