// Adobe

class Solution {
public:

    vector<vector<int>> permuteHelper(vector<int>& nums, int si) {
        
        if(si == nums.size() - 1) {
            vector<vector<int>> sa;
            vector<int> te;
            te.push_back(nums[si]);
            sa.push_back(te);
            return sa;
        }
        
       vector<vector<int>> recAns = permuteHelper(nums, si + 1);
        
        vector<vector<int>> ans;
       
        for(int i = 0; i < recAns.size(); i++) {
            
            for(int j = 0; j <= recAns[i].size(); j++ ) {
                
                vector<int> temp(recAns[i]); 
                temp.insert(temp.begin() + j, nums[si]);
                ans.push_back(temp);
            }
        }
        
        return ans;
       
        
        
    }
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        return permuteHelper(nums, 0);
    }
};