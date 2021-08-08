#include <iostream>

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


int main()
{
    cout<<czy_palindrom("AGGGA");
    return 0;
}
