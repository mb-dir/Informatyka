#include <iostream>

using namespace std;
string a = "a";
string wyraz;

bool czy_palindrom(string wyraz){
    for(int i = 0, j = wyraz.length()-1; i < j; i++, j--){
        if ((toupper(wyraz[i])) != (toupper(wyraz[j]))){
            return false;
        }
    }
    return true;
}

int main()
{
    cout << "wprowadz wyraz" << endl;
    cin>>wyraz;

    if(czy_palindrom(wyraz)){
        cout<<"Wyraz '"<<wyraz<<"' jest palindromem"<<endl;
    }else{
        cout<<"Wyraz '"<<wyraz<<"' nie jest palindromem"<<endl;
    }

    return 0;
}
