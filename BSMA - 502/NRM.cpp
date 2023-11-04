#include<iostream>  //ANKIT KUMAR -> 2331079
#include<math.h>
using namespace std;
double fx(double x){
    return (x * log10(x)) - (1.2);
}
double f_x(double x){
    return log10(x)+(1/log(10));   //log(10) means log of 10 with base e
}
int main() {
    cout << "f(x) => xlogx-1.2 = 0" << endl;
    cout << "Enter 1st Root Assumption which f(x) is near to 0: ";
    double x0,x1;
    cin>>x0;
    x1=x0-(fx(x0)/f_x(x0));
    int count=1;
    cout << "f(x" << count << ") = " << x1 << endl;
    while(abs(x1-x0)>0.00009){
        count++;
        x0=x1;
        x1=x0-(fx(x0)/f_x(x0));
        cout << "f(x" << count << ") = " << x1 << endl;
    }
    cout << "Hence, our desired root for f(x) => xlogx-1.2 = 0 is : " << x1<<endl;
    return 0 ;
}