#include <iostream>

using namespace std;

float kwota;
float nominaly[15]={500,200,100,50,20,10,5,2,1, 0.5, 0.2, 0.1, 0.05, 0.02, 0.01};
int main()
{

    cout << "Podaj kwote(zlotowki.grosze): " << endl;
    cin>>kwota;

    for(int i = 0; i < 15; i++){
        if(kwota >= nominaly[i]){
            int ile_razy_sie_miesci = kwota/nominaly[i];
            cout<<"Nominal: "<<nominaly[i]<<"[zl] miesci sie "<<ile_razy_sie_miesci<<" razy"<<endl;
            kwota = kwota - (ile_razy_sie_miesci*nominaly[i]);
        }
    }

    return 0;
}
