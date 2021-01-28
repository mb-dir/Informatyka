#include <iostream>

using namespace std;

void decToBin(int liczba){
    int tabPom[20], i=0;
    while(liczba!=0){
        tabPom[i]=liczba%2;
        liczba/=2;
        i++;
    }

    for(int k=i-1; k >=0; k--){
        cout<<tabPom[k];
    }

}

int main()
{
    decToBin(2127);
    return 0;
}
