#include <iostream>

using namespace std;

int silnia(int a){
    if(a < 2){
        return 1;
    }else{
        return silnia(a-1)*a;
    }
}

int main()
{
    cout << silnia(5) << endl;
    return 0;
}
