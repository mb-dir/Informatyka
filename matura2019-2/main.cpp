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
    int temp = a;
    while(a){
        b=a%10;
        suma+=silnia(b);
        a/=10;
    }
    fstream wynik;
    wynik.open("./wynik.txt", ios::out | ios::app);
    if(suma == temp){
        cout<<suma<<endl;
        wynik<<suma<<endl;
    }
    wynik.close();
}

int main()
{
    fstream liczby;
    liczby.open("./liczby.txt", ios::in);
    while(!liczby.eof()){
        getline(liczby, linia);
        zadanie(std::stoi(linia));
    }

    liczby.close();
    return 0;
}
