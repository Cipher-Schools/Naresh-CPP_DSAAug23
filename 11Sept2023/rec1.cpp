#include <iostream>
#include <vector>

using namespace std;

void allCombinations(int arr[], int n, int k, int si, vector<int> v) {
    
    // base case
    if(k == 0) {
        for(int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        
        cout << endl;
        return;
    }
    
    if(k < 0 || si >= n) {
        return ;
    }
    
    // pick
    v.push_back(arr[si]);
    allCombinations(arr, n, k - arr[si], si + 1, v);
    v.pop_back();
    
    
    // skip
    allCombinations(arr, n, k, si + 1, v);
    
    
}

int main() {
    
    int arr[] = {1, 5, 4, 3, 6, 2};
    int k = 8;
    vector<int> v;
    allCombinations(arr, 6, k, 0, v);
    
    
    
}