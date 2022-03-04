#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"May i know your name";
    
    getline(cin,name);
    
    cout<<"hello "<<name;
    return 0;
}