#include <iostream>

using namespace std;
int pierwszy_wyraz_ciagu = 150;
int main()
{
    cout << "**zad6**" << endl;
    for(int i = 1; i<=20; i++){
        cout<<"Wyraz ciagu nr"<<i<<": "<<pierwszy_wyraz_ciagu<<endl;
        pierwszy_wyraz_ciagu -=5;
    }
    return 0;
}
