//let's work on binary search algo
#include<bits/stdc++.h>
using namespace std;
//setting up parameters in the function this function return an integer
int find(vector<int>&v,int target){
    int begin = 0;
    //setting up the inital index
    int end = v.size()-1;
   //remid you that cpp is a 0th index language so -1 from the original length would give the length understandable in scope of cpp
   
   //see the things is begin could never exceed end in any case
    while(begin <= end){
        int mid = (int)(begin + (end-begin))/2;
        //(int)here is basically what we call typecasting basically i am doing float division here
        int mid_val = v[mid];
        //this is the mid value which we are gonna compare
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