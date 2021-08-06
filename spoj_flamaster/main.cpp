#include <iostream>
#include <string>
using namespace std;

int c;

void zad(string slowo){
    int len = slowo.length();
    int dl_ciagu = 1;

    for(int i = 0; i < len; i++){
        if(slowo[i] == slowo[i+1]){
            dl_ciagu++;
            if(i == len - 2 && dl_ciagu < 2){
                cout<<slowo[i];
            }
        }else{
            if(dl_ciagu > 2){
                cout<<slowo[i]<<dl_ciagu;
                dl_ciagu = 1;
            }else{
                if(dl_ciagu == 2){
                    cout<<slowo[i]<<slowo[i];
                    dl_ciagu = 1;
                }else{
                    cout<<slowo[i];
                    dl_ciagu = 1;
                }
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
