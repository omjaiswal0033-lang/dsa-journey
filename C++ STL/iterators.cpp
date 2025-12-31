#include <bits/stdc++.h>
using namespace std;
int main()
{
     // iterators point to elements of containers.
    //  vector <int> v;
    //  vector <int> ::iterator it = v.begin();
    //  cout<<*(it);
    //  cout<<*(it+1);
    //  for(vector <int> :: iterator it = v.begin(); it !=v.end(); it++)
    //  {
    //     cout << *(it);
    //  }
     // note that it++ points to next element of that container whereas the it+1 moves to next address if the container you using is contiguous then its nice but what if you are using a non contiguous container (like map set etc) then prefer it++; 
     vector <pair<int,int>> vp = {{1,2},{3,4}};
     vector <pair<int,int>> :: iterator it = vp.begin();
     cout << (*it).first;
     cout << (*it).second;
     cout << it->first;
     cout << it->second;
//note 
// . → for objects

// -> → for pointers and iterator-like objects

// so when i use for(auto it : vector or map) its not the actual iterator its just feature of for each loop
// }