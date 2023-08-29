// https://leetcode.com/problems/remove-outermost-parentheses/

class Solution {
public:
    string removeOuterParentheses(string s) {
        
        int cnt = 0;
        string ans = "";
        
        for(int i = 0 ; i < s.size(); i++) {
            
            if(cnt == 0) {
                cnt++;
                continue;
            }
            
            if(s[i] == '(') {
                cnt++;
            }else {
                cnt--;
            }
            
            if(cnt > 0) {
                ans += s[i];
            }
            
        }
        
        return ans;
        
    }
};