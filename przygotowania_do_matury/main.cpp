#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;
int tab[2];
string s;
int main()
{
    ifstream dane;

    dane.open("./dane.txt", ios::in);

    while(!dane.eof()){
        getline(dane,s);
        stringstream sString(s);
        sString >> tab[0];
        sString >> tab[1];
        cout<<tab[0]<<", "<<tab[1]<<endl;
    }

    cout << "Hello world!" << endl;

    dane.close();
    return 0;
}
