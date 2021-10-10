#include <iostream>
#include <string.h>
#include <math.h>
#include <algorithm>

using namespace std;

int t;

struct point {
    int X;
    long Y;
    float R;
    string ID;
};

bool sortPoints(point one, point two){
    return one.R < two.R;
}

float getTheVector(int a, int b){
    float c2 = a*a + b*b;
    return sqrt(c2);
}

int main()
{
    cin>>t;

    for(int i = 0; i < t; i++){
        int n;
        cin>>n;

        //Cuz x and y
        point tabPkt[n];

        for(int j = 0; j < n; j++){
            int x,y;
            string id;

            cin>>id>>x>>y;

            point newPoint;

            newPoint.X = x;
            newPoint.Y = y;

            if(x == 0){
                newPoint.R = abs(y);
            }else if(y == 0){
                newPoint.R = abs(x);
            }else{
                newPoint.R = getTheVector(x,y);
            }
            newPoint.ID = id;

            tabPkt[j] = newPoint;
        }
        sort(tabPkt, tabPkt+n, sortPoints);

        for(int j = 0; j < n; j++){
            cout<<tabPkt[j].ID<<" "<<tabPkt[j].X<<" "<<tabPkt[j].Y<<endl;
        }
    }
    return 0;
}
