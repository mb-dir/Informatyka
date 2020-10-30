#include <iostream>

using namespace std;

int waga_cegly = 2, laczna_waga_cegiel = 0;

int main()
{
    cout << "**zad8**" << endl;
    for(int i =1 ; i<=15; i++){
        laczna_waga_cegiel+=waga_cegly*i;
    }
    cout<<laczna_waga_cegiel;
    return 0;
}
