#include <iostream>
#include <fstream>

using namespace std;

string linia_zad1;

int main()
{
    fstream zad;
    zad.open("./dane_6_1.txt", ios::in);

    while(!zad.eof()){
        getline(zad, linia_zad1);
        cout<<linia_zad1<<endl;
    }

    zad.close();
    return 0;
}
