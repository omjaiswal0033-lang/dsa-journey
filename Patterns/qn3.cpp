#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cout<<"Enter no. of rows here : ";
    cin>>m;
    for(int i = 1;i<=m;i++)
    {
        int num = 1;
        for(int j = 1;j<=i;j++)
        {
           cout<<num++; 
        }
        cout<<"\n";
    }
}