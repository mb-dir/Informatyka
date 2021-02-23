#include <iostream>

using namespace std;

int potegowanie(int a, int b){
    if(b == 0){
        return 1;
    }else{
        return potegowanie(a, --b) * a;
    }
}

int main()
{
    cout << potegowanie(4,3) << endl;
    return 0;
}
