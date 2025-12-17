#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter num to find divisors of : ";
    cin>>n;
    vector <int> res;
    int i = 1;
    for(int i = 1;i*i<= n;i++)
    {
        if(n % i == 0)
        {
            res.push_back(i);
            if(i != n/i)
            {
            res.push_back(n/i);
            }
        }
        
    }
    cout<<"Printing all the divisors now : ";
    for(int i = 0;i < res.size();i++)
    {
        cout<<res[i]<<" ";
    }
}