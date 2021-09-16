#include <iostream>

using namespace std;

long long a,b;

long long silnia(long long s){
    if(s == 0){
        return 1;
    }else{
        return silnia(s-1)*s;
    }
}
int main()
{
    cin>>a>>b;
    cout<<(silnia(a))/((silnia(b))*(silnia(a-b)));
    return 0;
}
