#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

int main() {
    
    
    vector<int> v;
    
    // declare a vector of 5 size of particular value
    vector<int> v1(5, 1); 
     
    vector<int> v2 {4, 5, 6}; 

    
    // insert
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    
    // size
    cout << v.size() << endl;
    
    //  Iterate
    for(int i = 0; i < v.size(); i++) {
        cout <<v[i] <<" ";
    }
    cout << endl;
    
    // reverse
    reverse(v.begin(), v.end());
    
    // sort
    sort(v.begin(), v.end());
    
    // reverse Sort
    sort(v.begin(), v.end(), greater<int>());
    
    // delete first element
    v.erase(v.begin() + 1);
    
    
    //  Iterate
    for(auto i = v.begin(); i != v.end(); i++) {
        cout << *i <<" ";
    }
    cout << endl;
    
    
    
    // 2d vector
    vector<vector<int>> v4;

    v.push_back(v2);
    
    vector<vector<int>> v5 {
        
        {1, 2, 3},
        {4, 5, 6}
    };
    
    
     vector<vector<int>> v6(4);
    
    
    
    
    
    
    
    
}