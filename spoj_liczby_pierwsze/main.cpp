#include <iostream>
#include <math.h>

using namespace std;
bool czy_pierwisza(int a){
    if(a==2){
        return true;
    }else if(a==1){
        return false;
    }
    for(int i = 2; i <=sqrt(a); i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    for(int n = 1; n <10000; n++){
        if(czy_pierwisza(n)){
            cout<<"TAK"<<endl;
        }else{
            cout<<"NIE"<<endl;
        }
    }
    return 0;
}
