#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int ans = 0;
    while(t--){
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

    return 0;
}
