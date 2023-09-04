// https://leetcode.com/problems/delete-greatest-value-in-each-row/


class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        
        vector<priority_queue<int>> vpq(grid.size());
        
        
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j <grid[i].size(); j++) {
                vpq[i].push(grid[i][j]);
            }
        }
        
        int ans = 0;
        for(int i = 0; i < grid[0].size(); i++) {
            int currMax = 0;
            for(int j = 0; j < grid.size(); j++) {
                currMax = max(currMax, vpq[j].top());
                vpq[j].pop();
            }
            
            ans += currMax;
            
        }
        
        return ans;
        
        
    }
};