#include <bits/stdc++.h>
using namespace std;

// function for printing elements in the list
void showList(list<int> l) {
    list<int>::iterator it;
    for (it = l.begin(); it != l.end(); it++) {
        cout << *it << " ";
    }
}

//* Some Basic Operations on list
// front() – Returns the value of the first element in the list.
// back() – Returns the value of the last element in the list.
// push_front() – Adds a new element ‘g’ at the beginning of the list.
// push_back() – Adds a new element ‘g’ at the end of the list.
// pop_front() – Removes the first element of the list, and reduces the size of the list by 1.
// pop_back() – Removes the last element of the list, and reduces the size of the list by 1.
// insert() – Inserts new elements in the list before the element at a specified position.
// size() – Returns the number of elements in the list.
// begin() – begin() function returns an iterator pointing to the first element of the list.
// end() – end() function returns an iterator pointing to the theoretical last element which follows the last element.

int main() {
    list <int> list1, list2;
      
    list1.push_back(11);
    list1.push_back(12);
    list1.push_back(13);
    list1.push_back(14);
    list1.push_back(15);

    for(auto it : list1) {
        cout << it << endl;
    }

    cout << list1.empty() << endl;
    cout << list1.front() << endl;
    cout << list1.back() << endl;
    cout << list1.size() << endl;

    list2.push_front(11);
    list2.push_front(12);
    list2.push_front(13);
    list2.push_front(14);
    list2.push_front(15);

    for(auto it : list2) {
        cout << it << endl;
    }

    // sum of both list elements
    vector<int> result;
    while(!list1.empty() && !list2.empty()) {
        int list1frontelement = list1.front();
        int list2frontelement = list2.front();
        list1.pop_front();
        list2.pop_front();

        int sum = list1frontelement + list2frontelement;
        result.push_back(sum);
    }

    for(int i : result) {
        cout << i << " ";
    }

}