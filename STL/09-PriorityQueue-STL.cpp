#include <bits/stdc++.h>
using namespace std;

// -> In the case of the max heap, priority queues are a type of container adaptors, specifically designed such that its first element is always the greatest of the elements it contains and the rest elements are in decreasing order.
// -> In the case of the min heap, priority queues are a type of container adaptors, specifically designed such that its first element is always the smallest of the elements it contains and the rest elements are in increasing order.

// Syntax for a max-heap priority queue : priority_queue<object_type> variable_name;
// Syntax for a min-heap priority queue : priority_queue<object_type,vector<object_type>,greater<object_type>> variable_name; 

void explainPQ() {
    priority_queue<int> pq;
    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    pq.top(); // 10

    pq.pop(); // {8, 5, 2}

    // size & swap empty same as stack


    // Minimum Heap
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(5); // {5}
    pq.push(2); // {2, 5}
    pq.push(8); // {2, 5, 8}

}

void printpriorityqueue(priority_queue<int> pq)
{
    priority_queue<int> pq2=pq;
    while(!pq.empty())
    {
        cout<<pq.top()<<"\n";
        pq.pop();
    }
}

int main()
{
    priority_queue<int> pq;
    for(int i=1;i<=5;i++)
    pq.push(i);
    
    cout<<"The elements of the priority queue are:"<<endl;
    printpriorityqueue(pq);
    
    cout<<"The size of the priority queue: "<<pq.size()<<endl;
    cout<<"The top element of the priority queue: "<<pq.top()<<endl;
    cout<<"Pop the top element: "<<endl;
    
    pq.pop();
    printpriorityqueue(pq);
}

// time complexity
// push => log(n)
// top => O(1)
// pop => log(n)