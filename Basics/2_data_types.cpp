#include <bits/stdc++.h>
using namespace std;

//examples of data types are int, long int, long long int, float, double, char, boolean, strings.

int main () {
    int number = 42;  // Declare an integer variable 'number' with the value 42
    cout << "Number: " << number << endl; // Print the value of 'number'
    //-2147483648 to 2147483647 --> max value


    char letter = 'A';
    cout << "Letter: " << letter << endl;
    

    float decimal = 4.18;
    cout << "Decimal: " << decimal << endl;
   

    bool isTrue = true;
    cout << "Is True? " << isTrue << endl; //Will return 1 for true and 0 for false
    //Any value other than Zero including negative numbers indicate true and Zero itself is false
    

    double bigDecimal = 2.238768;
    cout << "Big Decimal: " << bigDecimal << endl;
    // float and double are used to store decimal numbers
    // Float can store upto 6 decimal places
    // Double can store upto 15 decimal places
    // But double costs us accuracy and more memory than float

    
    long int bigNumber = 2678348364;  //-9223372036854775808 to 9223372036854775807 --> max value
    cout << "Long Integer: " << bigNumber << endl;
    
    
    string message = "Hello, C++!";  //Strings are a collection of characters
    cout << "Messages: " << message << endl;
    return 0; // Return 0 to indicate successful program execution    
}