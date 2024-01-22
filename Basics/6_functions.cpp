#include <bits/stdc++.h>
using namespace std;

//functions are resuable blocks of code.

// int function(parameters if any)
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
    if(oddOrEven(16))
    {
        cout << "Even" << "\n"; //output: Even
    }

    else
    {
        cout << "Odd" << "\n"; //output: Odd
    }

    int sum = add2numbers(5, 5);
    cout << sum << "\n"; //output: 10

    PrintHello(); //output: Hello
}