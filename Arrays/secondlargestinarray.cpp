#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array here : ";
    cin>>n;
    vector <int> v(n);
    cout<<"List out the elements of vector here : ";
    for(int i = 0 ; i < n ; i++)
    {
        cin>>v[i];
    }
    int maxi = INT_MIN;
    for(int i = 0 ; i < n;i++)
    {
        if(maxi<v[i])
        {
            maxi = v[i];
        }
    }
    cout<<"Largest value present in the vector is : "<<maxi<<endl;
    int semimax = INT_MIN;
    for(int i = 0 ; i < n ;i++)
    {
        if (v[i]>semimax and v[i] < maxi)
        {
            semimax = v[i];
        }
    }
    cout<<"Second largest value present in the vector is : "<<semimax;
}