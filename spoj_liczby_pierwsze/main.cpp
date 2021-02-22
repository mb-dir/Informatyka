#include <iostream>
#include <math.h>

using namespace std;
int n,t;
bool czy_pierwsza(int x)
{
	if(x<2)
		return false; //gdy liczba jest mniejsza ni¿ 2 to nie jest pierwsz¹

	for(int i=2;i*i<=x;i++)
		if(x%i==0)
			return false; //gdy znajdziemy dzielnik, to dana liczba nie jest pierwsza
	return true;
}
int main()
{
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>t;
        if(czy_pierwsza(t)){
            cout<<"TAK"<<endl;
        }else{
            cout<<"NIE"<<endl;
        }
    }
    return 0;
}
