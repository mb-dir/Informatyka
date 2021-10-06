#include <iostream>
#include <string.h>

using namespace std;

int t;

struct point {   // Declare PERSON struct type
    int X;
    long Y;
    string ID;
};

int main()
{
    cin>>t;

    for(int i = 0; i < t; i++){
        int n;
        cin>>n;

        //Cuz x and y
        int tabPkt[n];

        for(int j = 0; j < n; j++){
            int x,y;
            string id;

            cin>>id>>x>>y;

            point newPoint;

            newPoint.X = x;
            newPoint.Y = y;
            newPoint.ID = id;

            tabPkt[j] = newPoint;
        }
    }
    return 0;
}
