#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter numbers:"<<endl;
    cin>>n>>m;
    while(m!=n)
    {
        if(m>n)
        {
        m=m-n;
        }
        else if(m<n)
        n=n-m;
    }
    cout<<"The greatest common divisor is:"<<n;
return 0;
}