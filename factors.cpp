#include <iostream>
using namespace std;
int main()
{
   int n,i,div;
   cout<<"Enter the no :"<<endl;
   cin>>n;
   cout<<"Factors are:"<<endl;
   for(i=1;i<=n;i++)
   {
       if(n%i==0)
       cout<<i<<endl; 
   }
    return 0;
}