#include <iostream>

using namespace std;

int nwd(int x, int y){
    while(x!=y){
        if(x>y){
            x=x-y;
        }else{
            y=y-x;
        }
    }
    return x;
}

int nww(int x, int y){
    return (x*y)/nwd(x,y);
}

void solve(int a, int b){
    cout<<nww(a,b);
}

int n;
int main()
{
    cin>>n;

    int tab[n][2];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cin>>tab[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        solve(tab[i][0], tab[i][1]);
        cout<<endl;
    }
    return 0;
}
