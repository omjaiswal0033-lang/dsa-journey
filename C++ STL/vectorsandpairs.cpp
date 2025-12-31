#include <bits/stdc++.h>
using namespace std;
void changing_the_vec(vector <int> b)
{
    b[0] = 99;
}
int main()
{
    // format : pair<datatype/container , datatype/container>
    pair <int,string> p;
    // // p = make_pair(2,"abc");
    // //or 
    // p = {20,"ABC"};
    // cout<<p.first<<" "<<p.second;
    // // pair <int,string> p1 = p; // this is just a copy.
    // // pair <int,string> &p1 = p; // this is a pointer,ie actual value.
    // vector <pair<int,string>> v1(3);
    // v1[0] = {2,"ABC"};
    // // vectors are contigous dynamic arrays.
    // // arrays are also contiguous but not dyanamic they have fixed size.
    // vector <int> v(2); // here size of vector is 0;
    // v[0] = 1;
    // v[1] = 2;
    // v.push_back(1); // time complexity : 0(1)
    // // v.size()  time complexity : 0(1) -> gives size of vector.
    // cout<<v[0];
    // vector <int> v2 = v; // its a copy ie 0(n)
    vector <int> V(2);
    V[0] = 1;
    V[1] = 2;
    changing_the_vec(V);
    cout<<V[0];
    // when arrays are passed in a function they are reference by default but when vectors are passed in function they are copy changes in that function wont affect og main () or any other () 's vector.
    // also strings arent referenced pass either they pass their copy in function.


}