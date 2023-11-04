#include <iostream>     //ANKIT KUMAR -> 2331079
#include <cmath>
using namespace std;
double fx(double x)
{
    return x*log10(x)-1.2;
}
int main()  
{
    cout << "f(x) => xlogx - 1.2 = 0" << endl;
    cout << "Enter 1st Root Assumption which f(x) is negative : ";
    double x1, x2;
    cin >> x1;
    cout << "Enter 2nd Root Assumption which f(x) is positive : ";
    cin >> x2;
    cout << "Root lies between " << x1 << " and " << x2 << endl;
    while (abs(x2 - x1) > 0.0009)
    {
        double mid = (x1 + x2) / 2;
        double fxValue = fx(mid);
        cout << "f(" << mid << ") = " << fxValue << endl;
        if (fxValue < 0)
        {
            x1 = mid;
        }
        else
        {
            x2 = mid;
        }
        cout << "Root lies between " << x1 << " and " << x2 << endl;
    }
    cout << "Hence, our desired root for (f(x) => xlogx - 1.2 = 0) is : " << (x1 + x2) / 2;
    return 0;
}