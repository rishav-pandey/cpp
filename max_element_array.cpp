#include <iostream>
using namespace std;
int main()
{
    int a[10]={45,78,45,89,98,56,78};
    int max=a[0];
    for(int i=1;i<=6;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }

    }
    cout<<"Maximum no is :"<<max;
return 0;
}