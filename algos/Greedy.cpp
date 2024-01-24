#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Minimum Number of notes

    int n; //Enter total
    cin >> n;

    //In Greedy algorithm, we try to find the best case in every step

    cout << n/500 << " Five Hundred Rupee notes\n";
    n = n%500;
    cout << n/200 << " Two Hundred Rupee notes\n";
    n = n%200;
    cout << n/100 << " Hundred Rupee notes\n";
    n = n%100;
    cout << n/50 << " Fifty Rupee notes\n";
    n = n%50;
    cout << n/20 << " Twenty Rupee notes\n";
    n = n%20;
    cout << n/10 << " Ten Rupee notes\n";
    n = n%10;
    cout << n/5 << " Five Rupee coins\n";
    n = n%5;
    cout << n/2 << " Two Rupee coins\n";
    n = n%2;
    cout << n << " One Rupee coins";
}