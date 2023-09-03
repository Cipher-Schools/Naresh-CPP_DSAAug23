// https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
        queue<int> q;
        
        for(int i = 0; i < students.size(); i++) {
            q.push(students[i]);
        }
        
        
        int cnt = 0;
        int j = 0;
        while(!q.empty()) {
            
            int currStu = q.front();
            
            if(currStu == sandwiches[j]) {
                q.pop();
                j++;
                cnt = 0;
            }
            else {
                cnt++;
                q.pop();
                q.push(currStu);
            }
            
            if(cnt == q.size()) {
                break;
            }
            
        } 
        
        return q.size();
        
        
        
        
    }
};