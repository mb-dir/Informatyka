#include <iostream>

using namespace std;

int n;

long double silnia(int a){
    if(a <= 1){
        return 1;
    }else{
        return silnia(a-1)*a;
    }
}

int main()
{
    cin>>n;
    cout<<silnia(n);
    return 0;
}
