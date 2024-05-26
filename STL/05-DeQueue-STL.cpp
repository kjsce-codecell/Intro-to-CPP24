#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq;
    dq.push_front(11);
    dq.push_front(12);
    dq.push_front(13);
    dq.push_front(14);
    dq.push_front(15);
    dq.push_front(16);

    cout << dq.front() << endl;

    for (auto i: dq) {
        cout << i << " ";
    }

    // we will use this most of the cases
    vector<int> result;
    while (!dq.empty()) {
        int element = dq.front();
        result.push_back(element);
        dq.pop_front();
    }

    // this code is tranferring all elements from deque to vector, preserving the order of elements



    // rest functions same as vectors
    // dq.pop_back();
    // dq.pop_front();
    // dq.size();
    // dq.empty();
    // dq.push_back();
    // dq.clear();
    // dq.end();

}