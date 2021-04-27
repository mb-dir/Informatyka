#include <iostream>

using namespace std;
int n, a = 0, b = 1;
int main()
{
    cout<<"Podaj n: ";
    cin>>n;

    for(int i = 0; i < n; i++){
        if(i==n-1){
            cout<<n<<"'ty wyraz jest rowny: "<<b<<endl;
        }
        b=b+a;
        a=b-a;
    }
    return 0;
}
