#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of vector here : ";
    cin>>n;
    vector <int> v(n);
    cout<<"Enter only 0 and 1 as elements in the vector : ";
    for(int i = 0 ; i < n ; i++)
    {
        cin>>v[i];
    }
    // TIME COMPLEXITY OF O(2n) : 
    // int c1=0,c2=0;
    // for(int i =0 ;i< n;i++)
    // {
    //     if(v[i]==0) c1++;
    //     else c2++;
    // }
    // for(int i = 0 ; i <c1; i++)
    // {
    //     v[i]=0;
    // }
    // for(int i = c2 ; i < n; i++)
    // {
    //     v[i]=1;
    // }
    // cout<<"Printing segregated vector now : ";
    // for(int e : v)
    // {
    //     cout<<e<<" ";
    // }
    //TIME COMPLEXITY OF O(n) : 
    int i  = 0;
    int j = n-1;
    while(i<j)
    {
        if(v[i] == 0)
        {
            i++;
        }
        else 
        {
            if(v[j]==0)
            {
                swap(v[i],v[j]);
                i++;
                j--;
            }
            else 
            {
                j--;
            }
        }
    }
    for(int e : v)
    {
        cout<<e<<" ";
    }
}