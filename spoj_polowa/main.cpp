#include <iostream>

using namespace std;

int t;
string s;

void solve(string s){
    int polowa = s.length()/2;
    for(int i = 0; i < polowa; i++){
        cout<<s[i];
    }
    cout<<endl;
}

int main()
{
    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>s;
        solve(s);
    }
    return 0;
}
