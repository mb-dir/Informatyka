#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

string s;
int liczby[100];
int i = 0;
string wyrazy[100];

int main()
{
    fstream pary;

    pary.open("./pary.txt", ios::in);

    while(!pary.eof()){
        getline(pary, s);
        stringstream sString(s);
        sString >> liczby[i];
        sString >> wyrazy[i];

        i++;
    }

    pary.close();

    for(int i = 0; i < 100; i++){
        cout<<liczby[i]<<endl;
    }
    return 0;
}
