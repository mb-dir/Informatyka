#include <iostream>
#include <fstream>

using namespace std;

string linia;
int tab[12] = {0,0,0,0,0,0,0,0,0,0,0,0};

int main()
{
    fstream slowa;
    slowa.open("./slowa.txt", ios::in);
    while(!slowa.eof()){
        getline(slowa, linia);
        tab[linia.length()-1]++;
    }
    slowa.close();

    for(int i = 0; i < 12; i++){
        cout<<i+1<<": "<<tab[i]<<endl;
    }
    return 0;
}
