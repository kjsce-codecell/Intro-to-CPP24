#include <bits/stdc++.h>
using namespace std;

//functions are resuable blocks of code.

// int function(parameter, parameter)
// {
//        {Reusable code block}
// }

//Functions can choose to have a return type such as "int" or "bool" or any other data types.
//You can also use "void" to make it so a function doesn't need to return anything.

bool oddOrEven(int a)
{
    if(a%2 == 0) // 
    {
        return true;
    }

    else
    {
        return false;
    }
}

int add2numbers(int a, int b)
{
    return a + b;
    //returns integer a+b
}

void PrintHello()
{
    cout << "Hello" << "\n";
    //does a very basic function of printing "Hello"
}

int main()
{
    int sum = add2numbers(5, 5);
    cout << sum << "\n";

    if(oddOrEven(16))
    {
        cout << "Even" << "\n";
    }

    else
    {
        cout << "Odd" << "\n";
    }

    PrintHello();
}