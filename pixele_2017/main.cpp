#include <iostream>
#include <fstream>

using namespace std;

int tab[200][320];

int maximum = 0, minimum = 250;

int main()
{
    fstream pixele;

    pixele.open("./dane.txt", ios::in);

    for(int i = 0; i < 200; i++){
        for(int j = 0; j < 320; j++){
            pixele>>tab[i][j];

            if(tab[i][j] > maximum){
                maximum = tab[i][j];
            }

            if(tab[i][j] < minimum){
                minimum = tab[i][j];
            }
        }
    }
    pixele.close();

    cout<<maximum<<endl;
    cout<<minimum<<endl;
    return 0;
}
