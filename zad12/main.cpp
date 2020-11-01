#include <iostream>

using namespace std;

int a,n,r, p=1, s=0;

int main()
{
    cout << "podaj pierwszy element ciagu" << endl;
    cin>>a;
    cout << "podaj ilosc elementow ciagu" << endl;
    cin>>n;
    cout << "podaj roznice ciagu" << endl;
    cin>>r;

    for(int i = 1; i <=n; i++){
        s+=a;
        p*=a;
        a+=r;
    }
    cout<<"suma: "<<s<<" iloczyn: "<<p;
    return 0;
}
