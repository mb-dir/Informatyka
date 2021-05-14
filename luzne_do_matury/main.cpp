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

    liczby.open("./test.txt", ios::in);

    while(!liczby.eof()){
        getline(liczby, linia);
        stringstream sString(linia);
        sString>>x;
        sString>>y;

        cout<<suma(std::stoi(x), std::stoi(y))<<endl;
    }

    liczby.close();

    return 0;
}
