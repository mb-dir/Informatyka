#include <iostream>

using namespace std;

long double r,d;
float pi = 3.141592654;
int main()
{
    cin>>r>>d;

    long double x = (r*r-((d*d)/4))*pi;
    cout<<x<<endl;

    return 0;
}
