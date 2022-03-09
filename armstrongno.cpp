#include <iostream>
using namespace std;
int main()
{
   //sum of cubes of digit is equal to the no 
   int n,r,k;

   int sum=0;
   cout<<"Enter the no"<<endl;
   cin>>n;
   k=n;
   while(n>0)
   {
       r=n%10;
       n=n/10;
       sum=sum+r*r*r;

   }
  if (sum==k)
  {
      cout<<"The no is armstong"<<endl;
  }
  else
  {
      cout<<"Not  a armstrong"<<endl;
  }
return 0;
}