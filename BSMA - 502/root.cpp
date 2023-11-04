#include<iostream>
#include<math.h>
using namespace std;
    int main() {
        double a,b,c,d,alpha,delta;
        cout<<"Enter the value of a : ";
        cin>>a;
        cout<<"Enter the value of b : ";
        cin>>b;
        cout<<"Enter the value of c : ";
        cin>>c;
        d=(b*b)-(4*a*c);
        if(d==0){
            alpha=(-b+sqrt(d))/(2*a);
            cout<<"Hence, the discriminant of this quadratic is 0"<<endl;
            cout<<"So, the roots are real and equal which is : "<<alpha<<endl;
        }
        else if(d>0){
            alpha=(-b+sqrt(d))/(2*a);
            delta=(-b-sqrt(d))/(2*a);
            cout<<"Hence, the discriminant of this quadratic is positive. "<<endl;
            cout<<"So, the roots are real and different which are : "<<alpha<<" and "<<delta<<endl;
        }
        else{
            alpha=(-b+sqrt(-d))/(2*a);
            delta=(-b-sqrt(-d))/(2*a);
            cout<<"Hence, the discriminant of this quadratic is negative. "<<endl;
            cout<<"So, the roots are imaginary and different which are : "<<alpha<<"i and "<<delta<<"i"<<endl;
        }
        return 0;
    }