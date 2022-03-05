#include <iostream>
using namespace std;
int main()
{
  int a,u,v;
  float speed;
  cout<<"Enter a,u,v"<<endl;
  cin>>a>>u>>v;
  speed=(v*v-u*u)/(2*a);
  cout<<"value of speed is "<<speed;
return 0;
}