#include <bits/stdc++.h>
using namespace std;

// -> A set in STL is a container that stores "unique" elements in a "sorted" order. 
// -> Every operation on a set takes O(1) complexity in the average case and takes O(n) in the worst case.

// begin(), end(), rbegin(), rend(), size(), empty(), insert(), erase(), clear(), find(), count(), lower_bound(), upper_bound() all are same as before
 
void  explainSet() {
    set<int> s;
    s.insert(1); // {1}
    s.insert(2); // {1, 2}
    s.insert(3); // {1, 2, 3}
    s.insert(4); // {1, 2, 3, 4}

    auto it = s.find(6); // it = s.end()
    if(it == s.end()) {
        cout << "Element not found\n";
    } else {
        cout << "Element found\n";
    }
}

int main() 
{
    set <int> s;
    for (int i = 1; i <= 10; i++) {
        s.insert(i);
    }

    cout << "Elements present in the set: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << * it << " ";
    }
    cout << endl;

    for (auto it : s)
        cout << it << " ";
    cout << endl;

    int n = 2;
    if (s.find(2) != s.end())
        cout << n << " is present in set" << endl;

    s.erase(s.begin());
    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << * it << " ";
    }
    cout << endl;

    cout << "The size of the set is: " << s.size() << endl;

    if (s.empty() == false)
        cout << "The set is not empty " << endl;
    else
        cout << "The set is empty" << endl;
    
    s.clear();
    cout << "Size of the set after clearing all the elements: " << s.size();
}


void explainMultiSet() {
    
    // Everything is same as set, except that it can store multiple copies of the same element.

    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    ms.erase(1); // All 1's are removed
    ms.erase(ms.find(1)); // Only one 1 is removed
}