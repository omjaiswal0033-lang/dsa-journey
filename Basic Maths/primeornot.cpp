#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter num you want to check : ";
    cin>>n;
    int flag  = 0;
    for(int i = 2;i <n;i++)
    {
        if(n % i ==0)
        {
            cout<<"Not a prime no.";
            flag = 1;
            break;
        }
    }
    if (flag == 0) cout<<"Its a prime no. ";
}