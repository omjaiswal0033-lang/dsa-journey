#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter total no. of rows : ";
    cin>>n;
    int num = 1;
    for(int i = 1 ; i <=n; i++)
    {
        for (int j = n; j>=i;j--)
        {
            cout<<num++;
        }
        num = 1;
        cout<<"\n";
    }
}