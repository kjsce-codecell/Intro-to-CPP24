#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    vector<int> vec = {4, 5, 2, 3, 1};
    
    cout << "Unsorted Array" << endl;
    
    for(int x : vec)
    {
        cout << x << endl;
    }
    
    sort(vec.begin(), vec.end()); 
    //sorts array from first element of arr to last element of arr
    
    cout << "Sorted Array" << endl;
    
    for(int x : vec)
    {
        cout << x << endl;
    }
    int biggernum = max(25, 50);
    int smallernum = min(30, 60);

    cout << "Bigger number is: " << biggernum << endl;
    cout << "Smaller number is: " << smallernum << endl;

    int a = 5;
    int b = 10;

    swap(a, b);
    
    cout << "a: " << a << " b: " << b << endl;
    
    auto maxnum = *max_element(vec.begin(), vec.end());
    auto minnum = *min_element(vec.begin(), vec.end());

    cout << "Max number is " << maxnum << endl;
    cout << "Min number is " << minnum << endl;
}