#include <iostream>
#include <algorithm>

using namespace std;

void zad(string slowo){
    int len = slowo.length();
    int dl_ciagu = 1;

    sort(slowo.begin(), slowo.end());
    cout<<slowo<<endl;
    for(int i = 0; i < len; i++){
        if(slowo[i] == slowo[i+1]){
            dl_ciagu++;
            if(i == len - 1){
                cout<<slowo[i]<<dl_ciagu<<endl;
            }
        }else{
            cout<<slowo[i]<<dl_ciagu<<endl;
            dl_ciagu = 1;
        }
    }
}

int main()
{
    zad("DAAAACAABAABBBBBBDDAAAABGZ");

    return 0;
}
