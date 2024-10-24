#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    unsigned char ch = 0;
    int count = 0;
    while (++ch <= 255)
    {
        count++;
    }
    printf("%d", count);
    return 0;
}