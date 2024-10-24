#include <iostream>
using namespace std;
int main()
{
      int a[15]={34,57,445,345,97,23};
      int l=0,h=5,key,mid;
      cout<<"enter key ";
      cin>>key;
      for(int i=0;i<5;i++)
      {
          mid=(l+h)/2;
          if(key==a[mid])
          {
              cout<<"Element fount at "<<mid;
              return 0;
          }
          else if (key<a[mid])
          {
    