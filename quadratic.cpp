#include<iostream>
#include<cmath>
using namespace std;
int main()
{    
    float a,b,c,x;
    cout<<"Enter coefficient of x square"<<endl;
    cin>>a;
    cout<<"Enter coefficient of x"<<endl;
    cin>>b;
    cout<<"Enter constant"<<endl;
    cin>>c;
    x=(-b+sqrt(b*b-4*a*c))/(2*a);
    cout<<"value is "<<x;

    return 0;
}