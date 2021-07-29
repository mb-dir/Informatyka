#include <iostream>
#include <string>
using namespace std;

int c;

void zad(string slowo){
    int len = slowo.length();
    int dl_ciagu = 1;

    for(int i = 1; i <= len; i++){
        if(slowo[i] == slowo[i-1]){
            dl_ciagu++;
        }else{
            if(dl_ciagu > 1){
                cout<<slowo[i-1]<<dl_ciagu;
                dl_ciagu = 1;
            }else{
                cout<<slowo[i-1];
                dl_ciagu = 1;
            }
        }
    }
}


int main()
{
    cin>>c;

    string tab[c];

    for(int i = 0; i < c; i++){
        cin>>tab[i];
    }

    for(int i = 0; i < c; i++){
        zad(tab[i]);
        cout<<endl;
    }

    //zad("DAAAACAABAABBBBBBDDA");

    return 0;
}
