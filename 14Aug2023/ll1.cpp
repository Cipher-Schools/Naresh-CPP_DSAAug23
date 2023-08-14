// Convert Binary Number in a Linked List to Integer


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
    
    
    int lenOfLL(ListNode* head) {
        
        int len = 0;
        
        while(head != NULL) {
            head = head->next;
            len++;
        }
        
        return len;
        
    }
    
    
    int getDecimalValue(ListNode* head) {
        
        int ans = 0;
        int len = lenOfLL(head);
        len--;
        
        
        
        while(head != NULL) {
            ans  += pow(2, len) * head->val;
            len--;
            head = head->next;
        }
        
        return ans;
        
        
        
    }
};
