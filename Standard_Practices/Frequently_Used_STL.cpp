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
    
    auto maxnum = *max_element(vec.begin(), vec.end());
    auto minnum = *min_element(vec.begin(), vec.end());

    cout << "Max number is " << maxnum << endl;
    cout << "Min number is " << minnum << endl;
}