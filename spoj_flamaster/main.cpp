#include <iostream>

using namespace std;

int c;

void zad(string slowo){
    int len = slowo.length();
    int dl_ciagu = 2;

    for(int i = 1; i < len-1; i++){
        if(slowo[i] == slowo[i-1] && slowo[i] == slowo[i+1]){
            dl_ciagu++;

            if(i == len - 2 && dl_ciagu > 2){
                cout<<slowo[i-1]<<" "<<dl_ciagu<<endl;
            }
        }else{
            if(dl_ciagu > 2){
                cout<<slowo[i-1]<<" "<<dl_ciagu<<endl;
            }
            dl_ciagu = 2;
        }
    }
}

int main()
{
    //cin>>c;

    //string tab[c];

    //for(int i = 0; i < c; i++){
    //    cin>>tab[i];
    //}

    zad("AAACBBBBBCC");
    return 0;
}
