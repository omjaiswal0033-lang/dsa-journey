#include <bits/stdc++.h>
using namespace std;
int main()
{
    // two types of maps are there :
    // 1) maps
    // 2) unordered maps
    // maps store key value pairs.
    // in normal maps its ascendingly key stored. (implemented thru red black trees).
    // map is a discontiguous container.
    // in maps you cant do it+1,tho you can do it++;
    // keys and values both can be any datatype/container.
    map<int, string> m;
    m.insert({1, "Abc"});
    map<int, string>::iterator it;
    m[3] = "prt"; // 0(log n) insertion {where n is current map size.} , if you just wrote m[6] now time complexity 0(log n) is used. as it stores empty string there if 2nd ele of pair ie .second were to be int it were to be stored as 0.
    // also keys are unique always if you put diff value then that overrides the prev one
    // NOTE : keys are unique they are sorted and insertion and accessing takes O(log n).
    // to accesss n elements from map its nlogn and to put n elements in map its nlogn.
    m[2] = "mbp";
    for (auto ele : m)
    {
        cout << ele.first << " " << ele.second << " ";
    }
    // in normal maps keys are stored in ascending sorted order if it were to be strings then it would be lexigraphically sorted in ascending form.
    // map.find(2); returns an iterator.
    // map.erase(2);
    // both erase and find take log n time.
    // if map<string , string > string comparison takes n times so its n log n.

    // UNORDERED MAPS : uses in built hash table
    //  insertion find erase takes 0(1) time complexity and also here keys
    //     In unordered_map, keys must be hashable

    // That means:

    // The key type must have a hash function

    // And an equality operator (==)

    // Built-in types like int, string, char, etc. already have these.

    // ✅ Values can be anything

    // The value type in an unordered_map has no restrictions beyond being copyable/movable.
}