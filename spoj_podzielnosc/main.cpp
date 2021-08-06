#include <iostream>

using namespace std;

int t;

void solve(int n, int x, int y){
    for(int i = 2; i < n; i++){
        if(i%x==0 && i%y!=0){
            cout<<i<<" ";
        }
    }
}

int main()
{
    cin>>t;

    int tab[t][3];
    for(int i = 0; i < t; i++){
        for(int j = 0; j < 3; j++){
            cin>>tab[i][j];
        }
    }

    for(int i = 0; i < t; i++){
        solve(tab[i][0], tab[i][1], tab[i][2]);
        cout<<endl;
    }
    return 0;
}
