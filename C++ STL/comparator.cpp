#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// comparator says if you want to swap return me false.
bool comp(const int &a,const int &b)
{
    if (a>b) return false;
    else return true;
}
int main()
{
    int n;
    cout<<"Enter size of vector : ";
    cin>>n;
    vector <int> v(n);
    cout<<"Enter elements of vector : ";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end(),comp);
    cout<<"Sorted vector is : ";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}