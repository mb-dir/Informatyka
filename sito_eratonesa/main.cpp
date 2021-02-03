#include <iostream>
#include <math.h>

using namespace std;
int n;
int main()
{
    cout<<"Do ilu liczb:";
    cin>>n;

    int t[n+1];
    for(int i = 2; i <=n; i++){
        t[i]=i+1;
    }


    for(int i=2; i <=sqrt(n); i++){
        if(t[i]!=0){
            for(int j=i*i; j <=n; j+=i){
                t[j]=0;
            }
        }
    }

    for(int i = 2; i <=n; i++){
        if(t[i]!=0){
            cout<<i<<endl;
        }
    }
    getchar();
    getchar();
    return 0;
}
