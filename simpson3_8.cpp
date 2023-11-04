#include<iostream>  //ANKIT KUMAR ->2331079
using namespace std;
double fx(double x){
    return ((1)/(1+(x*x)));
}
int main() {
    cout<<"Enter the statring limit : ";
    int start,end;
    cin>>start;
    cout<<"Enter the Ending limit : ";
    cin>>end;
    cout<<"How many terms have to take within limits : ";
    int terms;
    cin>>terms;
    double h=(start+end)/(double)terms;
    double arr[terms+1];
    for(int i=0;i<=terms;i++){
        double x0=start+(i*h);
        arr[i]=fx(x0);
    }
    double multiple_3=0;
    double other=0;
    for(int i=1;i<terms;i++){
        i%3==0?multiple_3+=arr[i]:other+=arr[i];
    }
    double result=((3*h)/8)*((arr[0]+arr[terms])+(3*other)+(2*multiple_3));
    cout<<"Integral of (1/(1+x^2)) is : "<<result<<endl;
    return 0 ;
}