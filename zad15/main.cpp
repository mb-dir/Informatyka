#include <iostream>

using namespace std;

int a,n;

int main()
{
    cout << "Podaj a" << endl;
    cin>>a;
    cout << "Podaj n" << endl;
    cin>>n;
    cout<<"******"<<endl;

    for(int i = 1; i<=n; i++){
        cout<<a<<endl;
        a*=a;
    }
    return 0;
}
