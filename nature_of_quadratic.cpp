#include<iostream>
#include<cmath>
using namespace std;
int main()
{    
    float a,b,c,x1,x2,d;
    cout<<"Enter coefficient of x square"<<endl;
    cin>>a;
    cout<<"Enter coefficient of x"<<endl;
    cin>>b;
    cout<<"Enter constant"<<endl;
    cin>>c;
    d=sqrt(b*b-4*a*c);
    if(d==0)
    {
        cout<<"Roots are real and equal "<<endl;
    }
    else if(d<0)
    {
        cout<<"Roots are imaginary "<<endl;

    }
    else
    {
        cout<<"Roots are real and unequal "<<endl;
    }
    x1=(-b+sqrt(b*b-4*a*c))/(2*a);
    x2=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"value is "<<x1<<" "<<x2;

    return 0;
}