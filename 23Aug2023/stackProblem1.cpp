// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/submissions/

class Solution {
public:
    int maxDepth(string s) {
        
        int cnt = 0;
        
        int ans = 0 ;
        
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                cnt++;
            }else if(s[i] == ')') {
                cnt--;
            }
            
            ans = max(ans, cnt);
            
        }
        
        return ans;
        
    }
};