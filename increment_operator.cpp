#include <iostream>
using namespace std;
int main()
{
  int i=5,j;
  j=i++;
  cout<<i<<" "<<j<<endl;
  j=++i;
  cout<<i<<" "<<j<<endl;
  j=2*i++ +2 + 2*++i;
  cout<<j;
  return 0;
}