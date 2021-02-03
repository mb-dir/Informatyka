#include <iostream>

using namespace std;
int t[99];
int main()
{
    for(int i = 2; i <100; i++){
        t[i]=i+1;
    }


    for(int i=2; i <=10; i++){
        if(t[i]!=0){
            for(int j=i*i; j <=100; j+=i){
                t[j]=0;
            }
        }
    }

    for(int i = 2; i <=100; i++){
        if(t[i]!=0){
            cout<<i<<endl;
        }
    }
    getchar();
    getchar();
    return 0;
}
