#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    fstream dane;
    string linia;
    dane.open("./dane_6_3.txt", ios::in);

    while(!dane.eof()){
        getline(dane, linia);
        cout<<linia<<endl;
    }

    dane.close();

    getchar();
    getchar();
    getchar();
    return 0;
}
