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

void solve(){
    int a,b;
    cin>>a>>b;
    cout<<nww(a,b);
}

int n;
int main()
{
    cin>>n;

    for(int i = 0; i < n; i++){
        solve();
    }
    return 0;
}
