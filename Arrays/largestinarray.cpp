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
    cout<<"Maximum value present in the vector is : "<<maxi;
}