#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter decimal num here : ";
    int n;
    cin>>n;
    int ans = 0;
    int mul = 1;
    while(n > 0)
    {
        ans = ans +(n%2)*mul;
        mul = mul*10;
        n = n /2 ;
    }
    cout<<"Binary Equivalent is : "<<ans;
}