/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *res = new ListNode(0);
        ListNode *meta = res;
        int carry = 0;
        while((l1!=NULL)||(l2!=NULL)||(carry!=0)){
            meta->next = new ListNode(0);
            meta = meta->next;
            int mSum = ((l1==NULL?0:l1->val)+(l2==NULL?0:l2->val)+carry);
            meta->val = mSum%10;
            carry = mSum/10;
            l1 = (l1==NULL?NULL:l1->next);
            l2 = (l2==NULL?NULL:l2->next);
            
            
        }
        return res->next;
    }
};