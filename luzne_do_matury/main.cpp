#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

void from_dec(int liczba, int system){
    string s;
    while(liczba){
        int x = liczba%system;
        if(x < 10){
            s = char('0' + x)+s;
        }else{
            s = char('A'-10 + x)+s;
        }
        liczba/=system;
    }
    cout<<s;
}
int main()
{
    from_dec(8, 2);
    return 0;
}
