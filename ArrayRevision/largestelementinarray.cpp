#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size of vector here : ";
    cin>>size;
    vector <int> arr;
    cout<<"Start entering vector elements now : ";
    for(int i = 0;i < size;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"largest element is : ";
    int max = INT_MIN;
    for(int i = 0;i< size;i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    cout<<max;
}