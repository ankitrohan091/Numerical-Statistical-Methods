#include<iostream>   //ANKIT KUMAR -> 2331079
#include<math.h>
using namespace std;
double fx(double x){
    return (x * log10(x)) - (1.2);
}
double cc(double a, double b)
{
    return b-(((b-a)/(fx(b)-fx(a)))*fx(b));
}
int main() {
    cout << "f(x) => xlogx - 1.2 = 0" << endl;
    cout << "Enter 1st Root Assumption : ";
    double a, b;
    cin >> a;
    double x1=a;
    cout << "Enter 2nd Root Assumption : ";
    cin >> b;
    cout << "Root lies between " << a << " and " << b << endl;
    int count = 1;
    while (abs(b-a) > 0.00009)
    {
        double c=cc(a,b);
        a=b;
        b=c;
        cout << "Root at " << count << " iteration : " << a << endl;
        count++;
    }
    cout << "Hence, our desired root for f(x) => xlogx - 1.2 = 0 is : " << b << endl;
    return 0 ;
}