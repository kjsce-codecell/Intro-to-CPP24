#include<bits/stdc++.h>
using namespace std;
int main(){
    //let's first declare a vector
    vector<int> ls = {1,2,3,4,5};
    // vector_declaration<data_type> name_of_vector = {values of the vector}
    
    for(int i = 0; i < ls.size(); i++){
        //size() keyword is use for getting size of the vector basically size() = sizeof(array)/sizeof(array[0])
        cout << ls[i] << " ";
    }
    cout << endl;

    // lets see the iterator way of printing a vector 

    for(auto x : ls){
        cout << x <<" ";
        }

    cout << endl;

    // Linear search in vector 
    // Linear search is a searching algorithm that 
    // finds the position of a target value within an array or vector.
    // vector<int> ls = {1,2,3,4,5};

    int to_find;
    cout << "Enter number to find" << endl;
    cin >> to_find;
    int index = -1;

    for(int i = 0; i < ls.size(); ++i)
    {
        if(ls[i] == to_find)
        {
            index = i;
        }
    }

    cout << index << endl;

    //Input things into a vector
    vector<int> vec = {};
    int element;

    cout << "Enter elements into array: \n";

    for(int i = 0; i < 5; ++i)
        {
            cin >> element;
            vec.push_back(element);
            //similarly vec.pop_back() is used to remove the last element of vector
        }
    
    cout << "Elements of the array are: \n";

    for(auto x : vec)
    {
        cout << x << endl;
    }

    //we can also create multidimensional vector
    vector<vector<int>> ls_2d = {{1,0,0},{0,1,0},{0,0,1}};

    return 0;
}
