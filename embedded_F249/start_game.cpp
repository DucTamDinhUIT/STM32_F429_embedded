#include <iostream>
#include <stdio.h>
using namespace std;
int offset(int offset)
{
    if (offset >= 12)
        {
            offset = offset -12;  
        };
    return offset;
}
int main()
{
    int a[12];
    int x;
    cin >> x;
    for (int i = 0; i <= 12; i++)
        {   
            offset(x);
            a[i] = offset;
            cout << a[i] <<" ";
        };
}
