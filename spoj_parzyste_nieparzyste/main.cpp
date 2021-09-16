#include <iostream>

using namespace std;

void solve(int tab[], int a){
    for(int d = 1; d < a; d+=2){
            cout<<tab[d]<<" ";
        }
        for(int d = 0; d < a; d+=2){
            if(d==a){
                cout<<tab[d]<<endl;
            }else{
                cout<<tab[d]<<" ";
            }
        }
}

int t;

int main()
{
    cin>>t;
    for(int i = 0; i < t; i++){
        int a;
        cin>>a;
        int tab[a];
        for(int j = 0; j < a; j++){
            cin>>tab[j];
        }
        solve(tab,a);
    }
    return 0;
}
