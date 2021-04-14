#include <iostream>
#include <algorithm>

using namespace std;

int tab_test[12] = {3,4,4,4,3,3,3,12,3,3,3,3};

int main()
{
    sort(tab_test, tab_test+12);
    int j = 0;
    int s = tab_test[12/2];
    for(int i = 0; i < 12; i++){
        if(tab_test[i] == s){
            j++;
        }
    }
    cout<<j;
    return 0;
}
