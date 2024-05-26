#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {11,12,13,14,15};
    cout << arr[0] << endl;

    cout << sizeof(arr)/sizeof(arr[0]) << endl;
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    // we can not push new element into the array run-time
    // we neither can increase the size of array, nor decrease the size of array
    // random memory allocation is possible but, it is not a good practice
    // normal array, you can not resize the array
    // insertion and deletion is not effective



    // VECTORS -
    // Vectors are the same as dynamic arrays with the ability to resize themselves automatically when an element is inserted or deleted, with their storage being handled automatically by the container.
    // Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators

    vector<int> v;

    v.push_back(11);
    cout << "size of the vector Now: " << v.size() << endl;
    cout << "capacity of the vector Now: " << v.capacity() << endl;
    
    v.push_back(12);
    cout << "size of the vector Now: " << v.size() << endl;
    cout << "capacity of the vector Now: " << v.capacity() << endl;

    v.push_back(13);
    cout << "size of the vector Now: " << v.size()  << endl;
    cout << "capacity of the vector Now: " << v.capacity() << endl;

    v.push_back(15);
    cout << "size of the vector Now: " << v.size() << endl;
    cout << "capacity of the vector Now: " << v.capacity() << endl;

    v.push_back(191);
    cout << "size of the vector Now: " << v.size() << endl;
    cout << "capacity of the vector Now: " << v.capacity() << endl;


    // Notes
    // 1. Random memory allocation is possible
    // 2. dynamic memory
    // 3. re-size vector easy
    // 4. memory manamgement is done by the container easly
    // 5. Methods of vector
    //       v.push_back() // insert element at the end
    //       v.pop_back() // delete element at the end
    //       v.size() // return the size of the vector
    //       v.capacity() // return the capacity of the vector means how many elements can be stored in the vector
    //       v.front() // return the first element of the vector
    //       v.back(); // return the last element of the vector
    //       v.at(); // return the element at the given index
    //       v.clear(); // clear the vector

    vector<int> vcontainer;
    vcontainer.push_back(11);
    vcontainer.push_back(12);
    vcontainer.push_back(13);
    vcontainer.push_back(14);
    vcontainer.push_back(150);

    for (auto i : vcontainer) {
        cout << i << " ";
    }

    cout << vcontainer.at(1) << endl;
    cout << vcontainer.capacity() << endl;
    cout << vcontainer.front() << endl;
    cout << vcontainer.back() << endl;
  
    vcontainer.clear();

    cout << "After the clear the vector what happended?" << endl;
    cout << vcontainer.size() << endl;
    cout << vcontainer.capacity() << endl;
    return 0;

}