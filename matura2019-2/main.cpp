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

}

int main()
{

    cout<<silnia(10);
    fstream liczby;
    liczby.open("./liczby.txt", ios::in);

    while(!liczby.eof()){
        getline(liczby, linia);
    }

    liczby.close();
    return 0;
}
