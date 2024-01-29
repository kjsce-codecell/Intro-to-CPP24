#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int t;
    cin >> t;
    
    while(t--)
    {
        cin >> n;
        int ans = 0;
        while(n--){
            int a,b,c;
            cin >> a >> b >> c;
            int temp = a + b + c;   // temp represents how many people can solve the question
            
            if(temp >= 2){
                ans += 1;
            }
            else{
                continue;
            }
        }
        
        cout << ans << endl;
    }

    return 0;
}

// 5
// 6
// 1 0 1
// 1 0 0
// 0 0 1
// 1 0 1
// 1 1 1
// 0 0 0
// 4
// 1 0 1
// 1 1 1
// 0 0 0
// 1 0 0
// 7
// 1 1 1
// 1 1 0
// 0 1 1
// 1 0 1
// 1 0 0
// 0 0 1
// 0 1 0
// 10
// 1 0 1
// 1 1 1
// 0 0 0
// 1 0 0
// 1 0 1
// 1 0 0
// 0 0 1
// 1 0 1
// 1 1 1
// 0 0 0
// 2
// 1 1 1
// 0 0 0