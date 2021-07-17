#include <iostream>

using namespace std;

int t;

string zadanie(string pesel){
    int liczba = 0;
    int suma = 0;
    for(int j = 0; j < 11; j++){
        if( (j == 1) || (j == 5) || (j == 9)){
            //Zamiana ¿eby ta pojedyñcza cyfra faktycznie by³a intem - https://stackoverflow.com/questions/5029840/convert-char-to-int-in-c-and-c
            liczba = (char(pesel[j]) - '0')*3;
        }else if(j == 2 || j == 6){
            liczba = (char(pesel[j]) - '0')*7;
        }else if(j == 3 || j == 7){
            liczba = (char(pesel[j]) - '0')*9;
        }else{
            liczba = (char(pesel[j]) - '0')*1;
        }
        suma+=liczba;
    }

    if(suma > 0){
        if(suma % 10 == 0){
            return "D";
        }else{
            return "N";
        }
    }else{
        return "N";
    }
}

int main()
{
    cin>>t;
    string pesele[t];
    for(int i = 0; i < t; i++){
        cin>>pesele[i];
    }

    for(int i = 0; i < t; i++){
        cout<<zadanie(pesele[i])<<endl;
    }
    return 0;
}
