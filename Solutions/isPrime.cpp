#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(int n)
{
    
    if (n <= 1){
        return false;
    }
  
    for (int i = 2; i <= n - 1; i++){
        if (n % i == 0)
            return false;
    }
 
    return true;
}
 

int main()
{
    int a;
    cin >> a;
    if(isPrime(a)){
      cout << "true\n";
    } else {
      cout << "false\n";
    }
    
    return 0;
}
