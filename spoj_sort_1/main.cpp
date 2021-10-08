#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int t;

struct point {   // Declare PERSON struct type
    int X;
    long Y;
    int R;
    string ID;
};


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
        for(int p = 0; p < n; p++){
            for(int c = 0; c < n-1; c++){
                cout<<"R dla "<<tabPkt[c].ID<<": "<<tabPkt[c].R<<", R dla "<<tabPkt[c+1].ID<<": "<<tabPkt[c+1].R<<endl;
                if(tabPkt[c].R > tabPkt[c+i].R){
                    cout<<"Zamiana"<<endl;
                    point z = tabPkt[c];
                    tabPkt[c] = tabPkt[c+1];
                    tabPkt[c+1] = z;
                }
            }
        }

        for(int j = 0; j < n; j++){
            cout<<tabPkt[j].ID<<" ("<<tabPkt[j].X<<", "<<tabPkt[j].Y<<"), r: "<<tabPkt[j].R<<endl;
        }
    }
    return 0;
}
