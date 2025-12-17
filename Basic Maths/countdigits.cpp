#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    long long  n;
    cout<<"Enter a num here : ";
    cin>>n;


    
    // brute force : 
    // long long count = 0;
    // while(n>0)
    // {
    //     n = n / 10;
    //     count++;
    // }
    // cout<<"Count of digits is : "<<count;



    // optimal approach : 
    cout<<"Count of digits is : "<<int(log10(n))+1;

}