#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter no's:"<<endl;
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<"a is greatest"<<endl;

    }
    else
    {
        if(b>c)
        cout<<"b is greatest "<<endl;
        else
        cout<<"c is greatest"<<endl;
    }
return 0;
}