#include <iostream>
#include <fstream>

using namespace std;
string linia;
string liczby_temp[500];

int liczby_tab[500];

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
    int i = 0;
    while(!liczby.eof()){
        getline(liczby, linia);
        liczby_temp[i] = linia;
        i++;
    }
    liczby.close();

    for(int  i = 0; i < 500; i++){
        liczby_tab[i] = std::stoi(liczby_temp[i]);
    }
    return 0;
}
