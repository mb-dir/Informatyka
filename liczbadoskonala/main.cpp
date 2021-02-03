#include <iostream>

using namespace std;

bool czy_doskonala(int a){
    int s = 0;
    for(int i = 1; i <= a/2; i++){
        if(a%i == 0){
            s+=i;
        }
    }
    if(s==a){
        cout<<"ok";
        return true;
    }else{
        return false;
    }

}

int main()
{
    for(int i = -15; i <30; i++){
        cout<<i<<" "<<czy_doskonala(i)<<endl;
    }

    getchar();
    getchar();
    return 0;
}
