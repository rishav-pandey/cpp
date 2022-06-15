#include <iostream>
using namespace std;
int main()
{
    int a[15],key,n;
    cout<<"Enter no of elements: ";
    cin>>n;
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    cout<<"Enter key ";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(key==a[i])
        {
            cout<<"element found at "<<i<<" position";
            return 0;
        }
    }
    cout<<"Element not found";
return 0;
}