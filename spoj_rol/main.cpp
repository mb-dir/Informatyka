#include <iostream>

using namespace std;

int n,k;

int main()
{
    cin>>n>>k;
    int tab1[n];
    int tab2[n];

    for(int i = 0; i < n; i++){
        cin>>tab1[i];
    }
    for(int i = 0; i < n; i++){
        cout<<tab1[i]<<endl;
    }
    return 0;
}
