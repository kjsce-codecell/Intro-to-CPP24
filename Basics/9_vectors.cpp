#include<bits/stdc++.h>
using namespace std;
int main(){
    //let's first declare a vector
    vector<int> ls = {1,2,3,4,5};
//  vector_declaration<data_type> name_of_vector = {values of the vector}


//so how do we print the vector for that actually there are two ways let's see them

for(int i = 0; i < ls.size(); i++){
    //size() keyword is use for getting size of the vector basically size() = sizeof(array)/sizeof(array[0])
    cout << ls[i] << " ";
}
cout << endl;

//lets see the iterator way of printing an array 
//Explain the conept of iterator
for(auto x:ls){
    cout << x <<" ";
}
//we can also create multidiemensional array
vector<vector<int>> ls_2d = {{1,0,0},{0,1,0},{0,0,1}};
}


