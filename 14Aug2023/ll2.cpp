// Middle of the Linked List

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
            len++;
            head = head->next;
        }
        
        return len;
        
    }
     
    ListNode* middleNode(ListNode* head) {
        
        int len = lenOfLL(head);
        len = len/2;
        
        while(len-- > 0) {
            head = head->next;
        }
        
        return head;
        
    }
};