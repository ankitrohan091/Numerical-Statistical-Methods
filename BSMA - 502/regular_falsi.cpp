#include <iostream>  //ANKIT KUMAR -> 2331079
#include <math.h>
using namespace std;
double fx(double x)
{
    return (x * log10(x)) - (1.2);
}
double cc(double a, double b)
{
    return ((a * fx(b)) - (b * fx(a))) / (fx(b) - fx(a));
}
int main()
{
    cout << "f(x) => xlogx - 1.2 = 0" << endl;
    cout << "Enter 1st Root Assumption which f(x) is negative : ";
    double a, b;
    cin >> a;
    cout << "Enter 2nd Root Assumption which f(x) is positive : ";
    cin >> b;
    cout << "Root lies between " << a << " and " << b << endl;
    double c1 = cc(a, b);
    double c2;
    int count = 1;
    while (abs(c2 - c1) > 0.0009)
    {
        c2 = c1;
        double fxValue = fx(c1);
        if (fxValue < 0)
        {
            a = c1;
        }
        else
        {
            b = c1;
        }
        cout << "Root at " << count << " iteration : " << c1 << endl;
        count++;
        c1 = cc(a, b);
    }
    cout << "Hence, our desired root for f(x) => xlogx - 1.2 = 0 is : " << c1 << endl;
    return 0;
}