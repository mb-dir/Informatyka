#include <iostream>
#include <string>


using namespace std;

bool czy_palindrom(string s){
    int len = s.length();
    for(int i = 0; i < len/2; i++){
        if(s[i] != s[len-1-i]){
            return false;
        }
    }
    return true;
}

int dodaj_palindrom(int a){
    std::string s = std::to_string(a);
    int len = s.length();
    for(int i = 0; i < len/2; i++){
        int x = s[i];
        s[i] = s[len-1-i];
        s[len-1-i] = x;
    }

    return a + std::stoi(s);
}

int main()
{

    int a;
    cin>>a;

    if(a < 10){
    cout<<a<<" "<<0;
        return 0;
    }
    int c = 0;
    while(1){
        std::string s = std::to_string(a);

        if(czy_palindrom(s)){
            cout<<a<<" "<<c;
            return 0;
        }else{
            a = dodaj_palindrom(a);
        }
        c++;
    }
    return 0;
}
