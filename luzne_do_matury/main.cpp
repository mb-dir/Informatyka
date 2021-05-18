#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

void from_dec(int liczba, int system){
    string nowa_liczba;

    while(liczba > 0){
        int cyfra = liczba%system;

        if(cyfra < 10){
            nowa_liczba=char('0'+cyfra) + nowa_liczba;
        }else{
            nowa_liczba=char('A'-10+cyfra) + nowa_liczba;
        }

        liczba/=system;
    }
    cout<<nowa_liczba;
}


int main()
{
    from_dec(118, 11);
    return 0;
}
