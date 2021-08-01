#include <iostream>

using namespace std;

int n;

int nwd(int a, int b){
    while(a!=b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a;
}

int main()
{
    cin>>n;
    int tab[2*n];

    for(int i = 0; i < 2*n; i++){
        cin>>tab[i];
    }

    for(int i = 0; i < 2*n; i+=2){
        cout<<nwd(tab[i], tab[i+1])<<endl;
    }
    return 0;
}
