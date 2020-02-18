#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if((head == NULL)||(head->next == NULL)){
            return head;
        }
        ListNode *res;
        ListNode *a;
        ListNode *b;
        ListNode *mid = new ListNode(0);
        mid->next = head;
        b = head->next;
        // head = head->next->next;
        // cout<<head->next->next<<endl;
        for(;(mid->next!= NULL)&&(mid->next->next!= NULL); mid = mid->next->next){
            
            res = mid->next->next->next;
            a = mid->next->next;
            mid->next->next->next = mid->next;
            mid->next->next = res; 
            mid->next = a;
        }
        return b;
    }
};

int main()
{
    /* code */
    ListNode *head;
    ListNode *res;
    ListNode *mid;
    ListNode *l1 = new ListNode(1);
    ListNode *l2 = new ListNode(2);
    ListNode *l3 = new ListNode(3);
    ListNode *l4 = new ListNode(4);
    head = l1;
    l1->next = l2;
    l2->next = l3;
    l3->next = l4;
    // l4->next = NULL;
    // cout<<l4->next<<endl;
    Solution result;
    res = result.swapPairs(head);
    for(mid = res; mid != NULL; mid = mid->next){
        cout<<mid->val<<endl;
    }
    return 0;
}
