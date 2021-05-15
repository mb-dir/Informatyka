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


void to_dec(int liczba, int system){
    string s;
    while(liczba){
        s=char(48+liczba%system)+s;
        liczba/=system;
    }
    cout<<s;
}
int main()
{
    to_dec(10, 2);
    return 0;
}
