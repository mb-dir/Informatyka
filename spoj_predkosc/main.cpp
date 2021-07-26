#include <iostream>

using namespace std;
int n,a,b;
int main()
{
    cin>>n;

    int tabWyniki[n];

    for(int i = 0; i < n; i++){
        cin>>a>>b;
        //https://www.naukowiec.org/zadania/fizyka/predkosc-srednia-na-dwoch-odcinkach_3725.html
        tabWyniki[i] = 2*a*b/(a+b);
    }

    for(int i = 0; i < n; i++){
        cout<<tabWyniki[i]<<endl;
    }

    return 0;
}
