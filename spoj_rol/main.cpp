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
        int p;
        if(i - k < 0){
            p = i-k+n;
        }else{
            p = i-k;
        }
        //cout<<"p: "<<p<<endl;

        tab2[p] = tab1[i];
    }
    for(int i = 0; i < n; i++){
        cout<<tab2[i]<<" ";
    }
    return 0;
}
