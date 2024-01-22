#include <bits/stdc++.h>
using namespace std;

vector<int> vec = {};

//Take input for size of array, then take input 
//for all elements of array, then print all elements of array
//Do this for "t" test cases

int main()
{
    int t; //initialising Test Case variable
    //no input statements like "Enter test cases: "

    cin >> t; //takes input of how many tests cases there are

    while(t--)
    {
        //when t reaches value of 0, while loop breaks 
        //because 0 is considered false
        
        //all your code for each test case goes here

        vec = {};
        int element;
        int size;
        cin >> size; //how many items you want in the array

        for(int i = 0; i < size; ++i)
        {
            cin >> element;
            vec.push_back(element);
        }

        cout << "Elements in arrays are: ";
        for(auto x : vec)
        {
            cout << x << " ";
        }

        cout << endl;
    }
}