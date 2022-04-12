#include <iostream>
using namespace std;
int main()
{
   int a[20],sum=0;
   for(int i=0;i<5;i++)
   {
      cout<<"enter values:";
      cin>>a[i];

   }
   for(int i=0;i<5;i++)
   {
      sum=sum+a[i];
   }
   cout<<"sum is ="<<sum;
return 0;
}