#include <iostream>
#include <time.h>
using namespace std;
int s=0, liczba;
int main()
{
    cout << "**zad16**" << endl;
    srand(time(NULL));
    for(int i = 0; i < 20; i++){

        liczba = rand()%30+30;

        s+=liczba;
    }

    cout<<s;
    return 0;
}
