//let's work on binary search algo
#include<bits/stdc++.h>
using namespace std;

int find(vector<int>&v,int target){
    int begin = 0;
    int end = v.size()-1;
   
    while(begin <= end){
        int mid = (int)(begin + (end-begin))/2;
        int mid_val = v[mid];
        if(mid_val == target){
            return target;
        }
        else if(mid_val > target){
            end = mid + 1;
        }
        else if(mid_val < target){
            end = mid - 1;
        }
    }
    return -1;
}


int main(){
    vector<int> ar = {1,2,3,4,5,6,7,8,9};
    cout << find(ar,3);
}