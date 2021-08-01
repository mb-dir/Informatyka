#include <iostream>

using namespace std;

int n;

int main()
{
    cin>>n;

    int tab[n];

    for(int i = 0; i < n; i++){
        int c = 10;
        int * arr;

        for(int j = 0; j < c; j++){
            if(j == 0){
                c = tab[j];
                arr = new int[c];
            }else{
                cin>>arr[i-1];
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout<<tab[i]<<endl;
    }

    return 0;
}

