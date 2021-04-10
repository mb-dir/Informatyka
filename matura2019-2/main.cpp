#include <iostream>
#include <fstream>

using namespace std;
string linia;
int main()
{
    fstream liczby;
    liczby.open("./liczby.txt", ios::in);

    while(!liczby.eof()){
        getline(liczby, linia);
        cout<<linia<<endl;
    }

    liczby.close();
    return 0;
}
