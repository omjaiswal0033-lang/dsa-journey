#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter total no. of rows : ";
    cin>>n;
    for(int i = 1 ; i <=n; i++)
    {
        for (int j = n; j>=i;j--)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}