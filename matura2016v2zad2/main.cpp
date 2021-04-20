#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

string linia;

int main()
{
    fstream zad;

    zad.open("dane_6_2.txt", ios::in);
    while(!zad.eof()){
        getline(zad, linia);
        cout<<linia<<endl;
    }

    zad.close();
    return 0;
}
