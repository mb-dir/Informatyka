#include <iostream>
#include <fstream>

using namespace std;

string slowo;



int main()
{
    fstream dane_1;

    dane_1.open("./dane_6_1.txt", ios::in);

    while(!dane_1.eof()){
        getline(dane_1, slowo);
        cout<<slowo<<endl;
    }

    dane_1.close();

    return 0;
}
