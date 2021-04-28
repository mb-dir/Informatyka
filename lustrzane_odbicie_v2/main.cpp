#include <iostream>

using namespace std;

string s;

int main()
{
    cin>>s;

    for(int i = s.length()-1; i >=0; i--){
        cout<<s[i];
    }
    return 0;
}
