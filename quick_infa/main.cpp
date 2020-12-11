#include <iostream>

using namespace std;

int tab[10] = {1, 5, 12, 21, 41, 44, 221, 222, 224, 1009};
int dlugosc_tab = sizeof(tab)/sizeof(int);

int l=0,r=dlugosc_tab-1,s=dlugosc_tab/2, szukany;

int main()
{
    cout << "Podaj szukany element: "<< endl;
    cin>>szukany;

    while(1){
        if(l>r){
            cout<<"Brak podanego elementu"<<endl;
            break;
        }

        if(tab[s] == szukany){
            cout<<szukany<<" znajduje sie pod indexem "<<s<<endl;
            break;
        }else if(tab[s]<szukany){
            l=s+1;
            s=(l+r)/2;
        }else{
            r=s-1;
            s=(l+r)/2;
        }
    }
    return 0;
}
