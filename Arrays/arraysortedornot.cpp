#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array here : ";
    cin>>n;
    vector <int> v(n);
    int flag = 0;
    cout<<"List out the elements of vector here : ";
    for(int i = 0 ; i < n ; i++)
    {
        cin>>v[i];
    }
    for(int i = 1;i<=n;i++)
    {
        if(v[i]<v[i-1])
        {
            flag++;
        }
    }
    if (flag == 0) cout<<"Given vector is a sorted vector.";
    else cout<<"Given vector is not a sorted vector.";
}