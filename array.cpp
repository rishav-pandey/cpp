#include <iostream>
using namespace std;
int main()
{
    int a[5]={1,5,7,3,8};
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    for (int x:a)
    {
       cout<<x<<" "; 
    }
    cout<<endl;
    for (auto x:a)
    {
        cout<<x<<" ";
    }
     cout<<endl;
    for (auto x:a)
    {
        cout<<++x<<" ";
    }
    cout<<endl;
     for (auto x:a)
    {
        cout<<x<<" ";
    }
    cout<<endl;
     for (auto &x:a)
    {
        cout<<++x<<" ";
    }
    cout<<endl;
     for (auto x:a)
    {
        cout<<x<<" ";
    }
return 0;
}
