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
    cout << czy_pierwisza(7) << endl;
    return 0;
}
