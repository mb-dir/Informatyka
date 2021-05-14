#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;
int a = 0;

int dl_liczby(int x){
    int s = 0;

    while(x){
        x/=10;
        s++;
    }
    return s;
}

int main()
{
    cout<<dl_liczby(111121);

    return 0;
}
