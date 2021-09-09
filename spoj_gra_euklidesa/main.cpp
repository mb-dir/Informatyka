#include <iostream>

using namespace std;

int a = 1, b = 1;

int main()
{
    while(a!=b){
        if(a > b){
            a = a-b;
        }else{
            b = b-a;
        }
    }
    cout<<a+b;
    return 0;
}
