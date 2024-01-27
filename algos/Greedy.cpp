#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Minimum Number of notes

    int n; // n is the amount to be paid
    cin >> n;

    // In Greedy algorithm, we try to find the best case in every step

    // Find the number of Five Hundred Rupee notes
    cout << n / 500 << " Five Hundred Rupee notes\n";
    n = n % 500; // Update the remaining amount after using Five Hundred Rupee notes

    // Find the number of Two Hundred Rupee notes
    cout << n / 200 << " Two Hundred Rupee notes\n";
    n = n % 200; // Update the remaining amount after using Two Hundred Rupee notes

    // Find the number of Hundred Rupee notes
    cout << n / 100 << " Hundred Rupee notes\n";
    n = n % 100; // Update the remaining amount after using Hundred Rupee notes

    // Find the number of Fifty Rupee notes
    cout << n / 50 << " Fifty Rupee notes\n";
    n = n % 50; // Update the remaining amount after using Fifty Rupee notes

    // Find the number of Twenty Rupee notes
    cout << n / 20 << " Twenty Rupee notes\n";
    n = n % 20; // Update the remaining amount after using Twenty Rupee notes

    // Find the number of Ten Rupee notes
    cout << n / 10 << " Ten Rupee notes\n";
    n = n % 10; // Update the remaining amount after using Ten Rupee notes

    // Find the number of Five Rupee coins
    cout << n / 5 << " Five Rupee coins\n";
    n = n % 5; // Update the remaining amount after using Five Rupee coins

    // Find the number of Two Rupee coins
    cout << n / 2 << " Two Rupee coins\n";
    n = n % 2; // Update the remaining amount after using Two Rupee coins

    // The remaining amount is represented by One Rupee coins
    cout << n << " One Rupee coins";

    return 0;
}

// Time Complexity: O(1)
// Space Complexity: O(1)

// Input:
// 2513

// Output:
// 5 Five Hundred Rupee notes
// 0 Two Hundred Rupee notes
// 1 Hundred Rupee notes
// 0 Fifty Rupee notes
// 0 Twenty Rupee notes
// 1 Ten Rupee notes
// 0 Five Rupee coins
// 1 Two Rupee coins
// 1 One Rupee coins
