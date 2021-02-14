#include <iostream>
#include <math.h>

using namespace std;
bool czy_pierwsza(int n)
{
	if(n<2)
		return false; //gdy liczba jest mniejsza ni¿ 2 to nie jest pierwsz¹

	for(int i=2;i*i<=n;i++)
		if(n%i==0)
			return false; //gdy znajdziemy dzielnik, to dana liczba nie jest pierwsza
	return true;
}
int main()
{
    for(int n = 1; n <10000; n++){
        if(czy_pierwsza(n)){
            cout<<"TAK"<<endl;
        }else{
            cout<<"NIE"<<endl;
        }
    }
    return 0;
}
