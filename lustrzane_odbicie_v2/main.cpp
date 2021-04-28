#include <iostream>

using namespace std;

string s, s2;

int main()
{
    cin>>s;
    s2=s;
    for(int i = s.length()-1, j=0; i >=0; i--, j++){
        s2[j]=s[i];
    }
    cout<<s2;
    return 0;
}
