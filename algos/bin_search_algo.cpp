#include<bits/stdc++.h>
using namespace std;

int bin_search(vector<int>&v,int target){
    int begin =  0;
    int end = v.size() -1;
    while(begin <= end){
        int mid = (int)(end + (end-begin))/2;
        int mid_val = v[mid];
        if(mid_val == target){
            return target;
            
            break;
        }
        else if(mid_val > target){
            end = mid - 1;
        }
        else{
            begin = mid + 1;
        }

    }
    return 0;
}


int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    cout << bin_search(arr,5);
}