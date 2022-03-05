#include <iostream>
using namespace std;
int main()
{
   int basic_salary,perc_allow,perc_dedu;
   int net_sal;
   cout<<"Enter basic salary"<<endl;
   cin>>basic_salary;
   cout<<"Enter percentage allowence "<<endl;
   cin>>perc_allow;
   cout<<"Enter percentage of deduction"<<endl;
   cin>>perc_dedu;
   net_sal=basic_salary+(basic_salary*perc_allow/100)-(basic_salary*perc_dedu/100);
   cout<<"Net salary is "<<net_sal;
return 0;
}