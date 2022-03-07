#include <iostream>
using namespace std;
int main()
{
   int m1,m2,m3,avg;
   cout<<"Enter marks of student"<<endl;
   cin>>m1>>m2>>m3;
   avg=(m1+m2+m3)/3;
   if(avg>=60)
   {
       cout<<"A Grade"<<endl;
   }
   else if(avg>=35&&avg<60)
   {
       cout<<"B Grade"<<endl;
   }
   else
   {
       cout<<"C Grade"<<endl;
   }
return 0;
}