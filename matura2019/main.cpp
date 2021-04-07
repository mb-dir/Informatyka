#include <iostream>
#include <fstream>

using namespace std;

string liczba;
string tab_liczby_string[500];
int tab[500];

int jd = 0;
int main()
{
    fstream liczby;
    liczby.open("./liczby.txt", ios::in);

    while(!liczby.eof()){
        getline(liczby, liczba);
        tab_liczby_string[jd] = liczba;
        jd++;
    }
    liczby.close();

    for(int i = 0; i<500; i++){
        tab[i] = std::stoi(tab_liczby_string[i]);
    }

    return 0;
}
