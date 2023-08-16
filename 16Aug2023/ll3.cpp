// 2181. Merge Nodes in Between Zeros

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* head2 = NULL;
        ListNode* temp = head2;
        
        int sum = 0;
        head = head->next;
        
        while(head != NULL) {
            
            sum += head->val;
            
            if(head->val == 0) {
                if(temp == NULL) {
                    temp = new ListNode(sum);
                    head2 = temp;
                }else {
                    temp->next = new ListNode(sum);
                    temp = temp->next;
                }
                
                sum = 0;
            }
            
            head = head->next;
            
        }
        
        return head2;
        
        
    }
};