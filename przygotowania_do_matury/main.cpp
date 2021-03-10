#include <iostream>
#include <fstream>
#include <sstream>
#include <math.h>

using namespace std;
int tab[2];
string s;

//przyk³ad pierwszy - sprawdziæ, czy druga liczba jest kwadretem pierwszej
void przyklad_1(int a, int b){
    if(a*a == b){
        cout<<"Tak "<<a<<", "<<b<<endl;
    }
}

int main()
{
    ifstream dane;

    dane.open("./dane.txt", ios::in);

    while(!dane.eof()){
        getline(dane,s);
        stringstream sString(s);
        sString >> tab[0];
        sString >> tab[1];
        przyklad_1(tab[0], tab[1]);
    }


    dane.close();
    return 0;
}
