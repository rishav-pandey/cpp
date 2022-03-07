#include <iostream>
using namespace std;
int main()
{
   int n,i,sum;
   cout<<"Enter the no :"<<endl;
   cin>>n;
  
   for(i=1;i<=n;i++)
   {
       if(n%i==0)
       {

           sum=sum+i;
       }
       
   }
   if(sum=n*2)
   {
       cout<<"It is  a perfect no";
   }
   else
   cout<<"Not a perfect no";
    return 0;
}