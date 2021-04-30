#include <iostream>

using namespace std;

int silnia(int a){
    int b = 1;
    for(int i = 1; i <=a; i++){
        b*=i;
    }
    return b;
}

int main()
{
    cout << silnia(3) << endl;
    return 0;
}
