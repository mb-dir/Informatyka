#include <iostream>

using namespace std;

string s;

void ciag(string s){
    string ciag = "";
    string ciagT = "";


    int dlT = 1;
    int dlMax = 1;

    for(int i = 0; i < s.length()-1; i++){
        if(s[i] == s[i+1]){
            ciagT+=s[i];
            dlT++;
        }else{
            if(dlT>dlMax){
               ciag = ciagT;
               dlMax = dlT;
               dlT = 1;
            }
        }
    }

    if(dlMax == 1){
        ciag = s[0];
        cout<<"dlmax";
    }else{
        ciag+=ciag[0];
        cout<<"ndndn";
    }

    cout<<ciag;
}

int main()
{
    cin>>s;

    ciag(s);
    return 0;
}
