#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x=81,y=17;
    while(y!= 0)
    {
        int c = x%y;
        x = y;
        y = c;
    }
    cout<<"Gcd is : "<<x;
}