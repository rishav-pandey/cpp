#include <iostream>
using namespace std;
enum days{mon=5,tues,wed,thur,fri,sat,sun};
enum dept{cs,mech,it};
int main()
{
    days d;
    dept dep; 
    d=mon;
    cout<<d<<endl;
    cout<<mon<<endl;
    cout<<tues<<endl;
    cout<<wed<<endl;
    cout<<thur<<endl;
    cout<<fri<<endl;
    cout<<sat<<endl;
    cout<<sun<<endl;
    if(d==mon)
    {
        cout<<"today is monday";
    }
return 0;
}