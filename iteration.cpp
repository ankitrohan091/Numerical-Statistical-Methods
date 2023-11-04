#include<iostream>    //ANKIT KUMAR -> 2331079
#include<cmath>
using namespace std;
double fx(double x){
    return (cos(x)+1)/3;
}
int main() {
    cout << "f(x) => cosx - 3x +1 = 0" << endl;
    cout << "Enter 1st Root Assumption which f(x) is near to 0: ";
    double x0;
    cin >> x0;
    double first=fx(x0);
    while ((abs(x0-first))>0.0009)
    {
        x0=first;
        first = fx(x0);
        cout << "f(" << x0 << ") = " << first << endl;
    }
    cout << "Hence, our desired root for f(x) => cosx - 3x + 1 = 0 is : " << first<<endl;
    return 0 ;
}