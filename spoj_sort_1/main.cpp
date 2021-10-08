#include <iostream>
#include <string.h>
#include <math.h>
#include <algorithm>

using namespace std;

int t;

struct point {   // Declare PERSON struct type
    int X;
    long Y;
    int R;
    string ID;
};

bool sortPoints(point one, point two){
    return one.R < two.R;
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
            newPoint.R = abs(x*y);
            newPoint.ID = id;

            tabPkt[j] = newPoint;
        }
        sort(tabPkt, tabPkt+n, sortPoints);

        for(int j = 0; j < n; j++){
            cout<<tabPkt[j].ID<<" ("<<tabPkt[j].X<<", "<<tabPkt[j].Y<<"), r: "<<tabPkt[j].R<<endl;
        }
    }
    return 0;
}
