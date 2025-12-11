#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of vector here : ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter vector elements now : ";
    for(int i = 0;i< n;i++)
    {
        cin>>v[i];
    }
    vector <int> prefix(n);
    prefix[0] = v[0];
    for(int i = 1;i< n;i++)
    {
        prefix[i] = prefix[i-1]+v[i];
    }
    cout<<"Printing prefix vector : ";
    for(int i=0;i<n;i++)
    {
        cout<<prefix[i]<<" ";
    }

}