#include <iostream>
#include <math.h>

using namespace std;

float r,d;

int main()
{
    cin>>r>>d;

    cout<<(r*r-((d*d)/4))*M_PI;

    return 0;
}
