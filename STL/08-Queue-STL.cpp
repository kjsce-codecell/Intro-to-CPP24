#include <bits/stdc++.h>
using namespace std;

// -> A queue is a linear list of elements in which deletions can take place only at one end called the front, and insertions can take place only at the end called the rear.
// -> The queue is a First In First Out type of data structure (FIFO), the terms FRONT and REAR are used in describing a linear list only when it is implemented as a queue.

void explainQueue() {
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(3); // {1, 2, 3}

    q.back() += 5; // {1, 2, 8}
    q.front(); // 1
    q.pop(); // {2, 9}

    // size & swap same as stack
}

void printqueue(queue<int> q1)
{
    queue<int> q2=q1;
    while(!q2.empty())
    {
        cout<<q2.front()<<"\n";
        q2.pop();
    }
}


int main()
{
    queue<int> q;
    for(int i=1;i<=5;i++)
    q.push(i);
    
    cout<<"The elements of the queue are:"<<endl;
    printqueue(q);
    
    cout<<"The size of the queue: "<<q.size()<<endl;
    cout<<"The front element of the queue: "<<q.front()<<endl;
    cout<<"The last element of the queue: "<<q.back()<<endl;
    cout<<"Pop the front element: "<<endl;
    
    q.pop();
    printqueue(q);
}