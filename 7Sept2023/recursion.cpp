

#include <iostream>
#include <vector>

using namespace std;

void printUsingRec(int arr[], int n, int si) {
    
    
    if(si == n) {
        return ;
    }
    
    printUsingRec(arr, n, si + 1);
    
    cout << arr[si] << " ";
    
    
}


bool linearSeachRecursive(int arr[], int n, int si, int x) {
    
    if(n == si) {
        return false;
    }
    
    bool recAns = linearSeachRecursive(arr, n, si + 1, x);
    
    if(recAns) {
        return true;
    }
    
    if(arr[si] == x) {
        return true;
    }
    
    return false;
    
}


int lastInd(int arr[], int n, int si, int x) {
    
    if(si == n) {
        return -1;
    }
    
    int recAns = lastInd(arr, n, si + 1, x);

    if(recAns != -1) {
        return recAns;
    }
    
    if(arr[si] == x) {
        return si;
    }
    
    return -1;
    
}


vector<int> allIndices(int arr[], int n, int si, int x) {
    
    
    if(n == si) {
        vector<int> v;
        return v;
    }
    
    vector<int> smallAns = allIndices(arr, n, si + 1, x);
    
    if(arr[si] == x) {
        smallAns.insert(smallAns.begin(), si);
    }
    
    return smallAns;
    
}


vector<vector<int>> final;

void sumEqualToK(int arr[], int n, int si, int k) {
    
    
    if(k == 0) {
        final.push_back()
    }
    
    if(si == n || k < 0) {
       
        vector<vector<int>> sa;
        return sa;
        
    }
    
    
    vector<vector<int>> s1 = sumEqualToK(arr, n, si + 1, k);
    
    vector<vector<int>> s2 = sumEqualToK(arr, n, si + 1, k - arr[si]);
    
    vector<vector<int>> ans ;
    
    for(int i = 0; i < s1.size(); i++) {
        vector<int> temp ;
        for(int j = 0; j < s1[i].size(); j++) {
            temp.push_back(s1[i][j]);
        }
        ans.push_back(temp);
    }
    
    for(int i = 0; i < s2.size(); i++) {
        
        vector<int> temp ;
        temp.push_back(arr[si]);
        
        for(int j = 0; j < s2[i].size(); j++) {
            temp.push_back(s2[i][j]);
        }
        ans.push_back(temp);
    }
    
    return ans;
    
} 




int main() {
    
    int arr[] = {1, 5, 4, 3, 6, 2};
    int k = 8;
    
    vector<vector<int>> ans = sumEqualToK(arr, 6, 0, k);
    
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout <<ans[i][j] <<" ";
        }
        cout << endl;
    }
    
    // vector<int> ans = allIndices(arr, 7, 0, 1);
    
    // for(int i = 0; i < ans.size(); i++) {
    //     cout << ans[i]<<" ";
    // }
    
    //cout << lastInd(arr, 6, 0, x);
    
    // bool isFound = linearSeachRecursive(arr, 5, 0, x);
    // if(isFound) {
    //     cout << "P";
    // }else {
    //   cout << "A"; 
    // }
    
        
    //printUsingRec(arr, 5, 0);
}