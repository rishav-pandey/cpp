#include <iostream>
using namespace std;
int main()
{
   int n,i=1,f=1;
   cout<<"Enter the no :"<<endl;
   cin>>n;
   for( i=1;i<=n;i++)
   {
       f=f*i;
   }
   cout<<"Factorial of no is:"<<f<<endl;
return 0;
}