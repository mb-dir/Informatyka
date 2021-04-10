#include <iostream>
#include <fstream>

using namespace std;
string linia;
int silnia(int a){
    if(a == 0){
        return 1;
    }else{
        return silnia(a-1)*a;
    }
}
void zadanie(int a){
    int suma = 0;
    int b;
    while(a){
        b=a%10;
        cout<<b<<endl;
        a/=10;
    }
}

int main()
{

    zadanie(12345);
    fstream liczby;
    liczby.open("./liczby.txt", ios::in);

    while(!liczby.eof()){
        getline(liczby, linia);
    }

    liczby.close();
    return 0;
}
