#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstring>

using namespace std;


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


int main()
{

    cout<<test(1)<<endl;
    cout<<test(2)<<endl;
    cout<<test(3)<<endl;
    cout<<test(4)<<endl;
    cout<<test(5)<<endl;
    cout<<test(6)<<endl;
    cout<<test(7)<<endl;
    return 0;
}
