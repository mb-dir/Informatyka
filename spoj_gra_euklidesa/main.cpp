#include <iostream>

using namespace std;

int t;

void solve(int a, int b){
    while(a!=b){
        if(a > b){
            a = a-b;
        }else{
            b = b-a;
        }
    }
    cout<<a+b<<endl;
}

int main()
{
    cin>>t;
    int arr[2*t];
    for(int i = 0; i < 2*t; i+=2){
        cin>>arr[i]>>arr[i+1];
    }

    for(int i = 0; i < 2*t; i+=2){
        solve(arr[i], arr[i+1]);
    }

    return 0;
}
