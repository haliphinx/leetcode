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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* ansHead, *metaHead;
        if(l1 == NULL){
            return l2;
        }
        
        if(l2 == NULL){
            return l1;
        }
        
        if(l1->val > l2->val){
            ansHead = l2;
            l2 = l2->next;
        }
        else{
            ansHead = l1;
            l1 = l1->next;
        }
        
        metaHead = ansHead;
        
        while((l1 != NULL)||(l2 != NULL)){
            if(l1 == NULL){
                metaHead->next = l2;
                break;
            }
            if(l2 == NULL){
                metaHead->next = l1;
                break;
            }
            if(l1->val>l2->val){
                metaHead->next = l2;
                metaHead = metaHead->next;
                l2 = l2->next;
            }
            else{
                metaHead->next = l1;
                metaHead = metaHead->next;
                l1 = l1->next;
            }
        }
        
        
        return ansHead;
        
    }
};