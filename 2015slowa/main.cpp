#include <iostream>
#include <fstream>

using namespace std;

string linia;
int tab[12] = {0,0,0,0,0,0,0,0,0,0,0,0};

int main()
{
    fstream slowa;
    fstream slowa_odp;
    slowa.open("./slowa.txt", ios::in);
    while(!slowa.eof()){
        getline(slowa, linia);
        tab[linia.length()-1]++;
    }
    slowa.close();

    slowa_odp.open("./slowa_odp.txt", ios::out);
    for(int i = 0; i < 12; i++){
        slowa_odp<<i+1<<": "<<tab[i]<<endl;
    }

    slowa_odp.close();
    return 0;
}
