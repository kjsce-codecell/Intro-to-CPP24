#include <bits/stdc++.h>
using namespace std;

// -> A stack is a non-primitive linear data structure. 
// -> It is an ordered list in which the addition of a new data item and deletion of the already existing data item is done from only one end known as the top of the stack (TOS)
// -> The element which is added in last will be first to be removed and the element which is inserted first will be removed in last. 
// -> As all the deletion and insertion in a stack are done from the top of the stack, the last added element will be the first to be removed from the stack. That is the reason why stack is also called Last-in-First-out (LIFO). 

void explainstack() {

    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(4); // {4, 3, 2, 1}
    st.push(5); // {5, 4, 3, 2, 1}

    cout << st.top(); // prints 5 & st[2] is invalid
    st.pop(); // {4, 3, 2 , 1}
    st.top(); // 4
    st.size(); // 4
    st.empty(); // false

    stack<int> s1, s2;
    s1.swap(s2);

}

void printstack(stack<int>s1)
{
    stack<int> s2=s1;
    while (!s2.empty()) {
        cout << s2.top() << '\n';
        s2.pop();
    }
}

int main() {
    stack<int> s;
    for(int i=1;i<=5;i++)
    s.push(i);
    
    cout<<"The elements of the stack are:"<<endl;
    printstack(s);
    
    cout<<"The size of the stack: "<<s.size()<<endl;
    cout<<"The top element of the queue: "<<s.top()<<endl;
    cout<<"Pop the top element: "<<endl;
    
    s.pop();
    printstack(s);
}