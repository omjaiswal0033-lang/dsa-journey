#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s1,s2;
    cout<<"Enter size of vector 1 : ";
    cin>>s1;
    cout<<"Enter elements of vector 1 : ";
    vector<int> v1(s1);
    for(int i = 0;i< s1;i++)
    {
        cin>>v1[i];
    }
    cout<<"Enter size of vector 2 : ";
    cin>>s2;
    cout<<"Enter elements of vector 2 : ";
    vector<int> v2(s2);
    for(int i = 0;i< s2;i++)
    {
        cin>>v2[i];
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    vector <int> ans;
    int i=0,j=0;
    
    // Logic corrected: Push smaller elements first to maintain sort order
    while(i<s1 && j<s2)
    {
        if(v1[i] < v2[j]) 
        {
            if(ans.empty() || ans.back() != v1[i]) ans.push_back(v1[i]);
            i++;
        }
        else if(v2[j] < v1[i]) 
        {
            if(ans.empty() || ans.back() != v2[j]) ans.push_back(v2[j]);
            j++;
        }
        else 
        {
            if(ans.empty() || ans.back() != v1[i]) ans.push_back(v1[i]);
            i++;
            j++;
        }
    }

    // Added loops to include remaining elements
    while(i < s1) {
        if(ans.empty() || ans.back() != v1[i]) ans.push_back(v1[i]);
        i++;
    }
    while(j < s2) {
        if(ans.empty() || ans.back() != v2[j]) ans.push_back(v2[j]);
        j++;
    }

    cout<<"Printing final vector after union operation : ";
    for(int e : ans)
    {
        cout<<e<<" ";
    }
}