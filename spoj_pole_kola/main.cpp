#include <iostream>
#include <iomanip>
using namespace std;

float r,d;
long double pi = 3.141592654;
int main()
{
    cin>>r>>d;

    int y = (r*r-((d*d)/4))*pi;

    long double x = (r*r-((d*d)/4))*pi;
    cout << fixed << setprecision(2) << x;

    return 0;
}
