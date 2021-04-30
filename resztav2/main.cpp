#include <iostream>

using namespace std;
int nominaly[8] = {200,100,50,20,10,5,2,1};

int kwota;
int main()
{
    cin>>kwota;

    for(int i = 0; i < 8; i ++){
        int ile_razy = kwota/nominaly[i];
        kwota = kwota - (nominaly[i]*ile_razy);

        cout<<nominaly[i]<<" miesci sie: "<<ile_razy<<endl;
    }
    return 0;
}
