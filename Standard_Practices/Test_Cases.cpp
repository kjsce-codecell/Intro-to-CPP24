#include <bits/stdc++.h>
using namespace std;

//Take input for size of array, then take input 
//for all elements of array, then print all elements of array
//Do this for "t" test cases

int main()
{
    int t; //initialising Test Case variable
    //no input statements like "Enter test cases: "

    cin >> t; 
    //takes input of how many tests cases there are

    for(int i = 0; i < t; ++i)
    {
        //when t reaches value of 0, while loop breaks 
        //because 0 is considered false
        
        //all your code for each test case goes here

        int num;
        cin >> num;

        if(num % 2 == 0)
        {
            cout << "Even\n";
        }

        else
        {
            cout << "Odd\n";
        }
    }

    return 0;
}