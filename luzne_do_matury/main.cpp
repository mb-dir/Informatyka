#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstring>

using namespace std;

int b;


int potega(int podstawa, int wykladnik){
    if(wykladnik == 0){
        return 1;
    }else{
        return potega(podstawa, wykladnik-1)*podstawa;
    }
}


int matura(int ile){
    int a = 9;
    for(int i = ile - 1; i > 0; i--){
        a+=potega(10, i)*9;
    }
    return a;
}


int dl(int a){
    int c = 0;
    while(a){
        c++;
        a/=10;
    }
    return c;
}

int main()
{
    cin>>b;

    cout<<matura(dl(b))-b;

    return 0;
}
