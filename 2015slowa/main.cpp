#include <iostream>
#include <fstream>

using namespace std;

string linia;

int main()
{
    fstream slowa;
    slowa.open("./slowa.txt", ios::in);
    while(!slowa.eof()){
        getline(slowa, linia);
        cout<<linia<<endl;
    }
    slowa.close();
    return 0;
}
