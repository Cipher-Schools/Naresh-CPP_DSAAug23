// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        priority_queue<int> pq;
        
        
        for(int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
        }
        
        int lastEle = pq.top();
        pq.pop();
        
        return (lastEle - 1) * (pq.top()-1);
        
        
//         sort(nums.begin(), nums.end());// nlogn 
//         int n = nums.size();
        
//         return (nums[n-1] -1) *(nums[n-2]-1);
        
    }
};