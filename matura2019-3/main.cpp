#include <iostream>
#include <fstream>

using namespace std;
string linia;

int nwd(int a, int b){
    while(a!=b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a;
}

int main()
{
    fstream liczby;
    liczby.open("./liczby.txt", ios::in);
    while(!liczby.eof()){
        getline(liczby, linia);
        //cout<<linia<<endl;
    }
    liczby.close();

    cout<<nwd(16,24);
    return 0;
}
