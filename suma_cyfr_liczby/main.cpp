#include <iostream>

using namespace std;
int w=0, n=45778;
int main()
{
    while(n!=0){
        w=w + n%10;
        n=n/10;
    }
    cout<<w;
    return 0;
}
