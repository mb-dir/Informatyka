#include <iostream>

using namespace std;
int arr[6] = {10,1,14,7,-1,0};


int partial(int*arr, int l, int r){
    //r(last element) as a pivot
    int i = l-1;
    for(int j = l; j < r-1; j++){
        if(arr[j] < arr[r]){
            i+=1;
            int x = arr[i];
            arr[i] = arr[j];
            arr[j] = x;
        }
    }
    int y = arr[i+1];
    arr[i+1] = arr[r];
    arr[r] = y;

    return i+1;
}

void qs(int*arr, int l, int r){
    if(l>=r){
        return;
    }else{
        int p = partial(arr, l, r);
        qs(arr, l, p-1);
        qs(arr, p+1, r);
    }
}

int main()
{
    qs(arr, 0, 5);
    for(int i = 0; i < 6; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
