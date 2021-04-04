#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int l[100];
string s[100];
int i = 0;

string linia;

int main()
{
    fstream pary;
    pary.open("./pary.txt", ios::in);
    while(!pary.eof()){
        getline(pary, linia);
        stringstream sString(linia);
        sString>>l[i];
        sString>>s[i];
        i++;
    }
    pary.close();

    for(int i = 0; i < 100; i++){
        cout<<l[i]<<" "<<s[i]<<endl;
    }
    return 0;
}
