#include <iostream>

using namespace std;

int t;

int main()
{
    cin>>t;

    for(int i = 0; i < t; i++){
        int n,x,y;

        cin>>n>>x>>y;

        for(int j = 0; j < n; j++){
            if(j%x ==  0 && j%y != 0){
                cout<<j<<endl;
            }
        }
    }
    return 0;
}
