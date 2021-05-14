#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;
string linia;

string x,y;

int suma(int a, int b){
    return a+b;
}

int main()
{
    fstream liczby;
    fstream odp;

    liczby.open("./test.txt", ios::in);
    odp.open("./odp.txt", ios::out);

    while(!liczby.eof()){
        getline(liczby, linia);
        stringstream sString(linia);
        sString>>x;
        sString>>y;

        odp<<suma(std::stoi(x), std::stoi(y))<<endl;
    }

    liczby.close();
    odp.close();

    return 0;
}
