#include <iostream>
#include <fstream>

using namespace std;

int tab[200][320];

int main()
{
    fstream pixele;

    pixele.open("./dane.txt", ios::in);

    for(int i = 0; i < 200; i++){
        for(int j = 0; j < 320; j++){
            pixele>>tab[i][j];
        }
    }
    pixele.close();
    return 0;
}
