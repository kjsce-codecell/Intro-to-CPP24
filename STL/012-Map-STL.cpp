#include <bits/stdc++.h>
using namespace std;

// -> A map in STL is a container that stores elements in a key-value pair.
// -> Every operation on a map takes O(log n) complexity in the average case and takes O(n) in the worst case.

void explainMap() {
    map<int, int> mpp;
    map<int, pair<int, int>> mpp;
    map<pair<int, int>, int> mpp;

    mpp[1] = 2; //  On key 1, value 2 is stored, {1 -> 2}
    mpp.emplace({3, 1});
    mpp.insert({2, 4});
    mpp[{2, 3}] = 10;
    
    // {
    //     {1, 2}
    //     {2, 4}
    //     {3, 1}
    // }

    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1]; // 2
    cout << mpp[5]; // 0 or null
}

int main()
{
    map < int, int > mp;
    for (int i = 1; i <= 5; i++) {
        mp.insert({i , i * 10});
    }

    cout << "Elements present in the map: " << endl;
    cout << "Key\tElement" << endl;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it -> first << "\t" << it -> second << endl;
    }

    for (auto it : mp) {
        cout << it.first << "\t" << it.second << endl;
    }

    int n = 2;
    if (mp.find(2) != mp.end())
        cout << n << " is present in map" << endl;

    mp.erase(mp.begin());
    cout << "Elements after deleting the first element: " << endl;
    cout << "Key\tElement" << endl;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it -> first << "\t" << it -> second << endl;
    }

    cout << "The size of the map is: " << mp.size() << endl;

    if (mp.empty() == false)
        cout << "The map is not empty " << endl;
    else
        cout << "The map is empty" << endl;
        
    mp.clear();
    cout << "Size of the map after clearing all the elements: " << mp.size();
}

void explainMultiMap() {
    // Everything same as map, but it can have multiple values for the same key.
    // only map[key] cannot be used here
}

void explainUnorderedMap() {
    // same as set & unordered-set difference
}