#include <iostream>

using namespace std;
int arr[6] = {10,1,14,7,-1,0};

void drawArray(int*arr, int l,int r){
    for(int i = l; i < r; i++){
        if(i == l){
            cout<<"["<<arr[i]<<", ";
        }else if(i == r-1){
            cout<<arr[i]<<"]"<<endl;
        }else{
            cout<<arr[i]<<", ";
        }
    }
}

int partial(int*arr, int l, int r){
    //r(last element) as a pivot
    int i = l-1;
    //<= than r-1 cuz the last element before the pivot must be taken into account
    for(int j = l; j <= r-1; j++){
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
    cout<<"l: "<<l<<" r: "<<r<<"  ";
    drawArray(arr, 0, 6);

    return i+1;
}

void qs(int*arr, int l, int r){
    if(l>=r){
        cout<<"odrzucone l: "<<l<<" odrzucone r: "<<r<<endl;
        return;
    }else{
        int p = partial(arr, l, r);
        qs(arr, l, p-1);
        qs(arr, p+1, r);
    }
}

int main()
{

    drawArray(arr, 0, 6);
    qs(arr, 0, 5);
    //drawArray(arr, 0, 6);
    return 0;
}
