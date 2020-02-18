#include <iostream>

using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* del = head;
        int val = 0;
        int m = 0;
        for (ListNode* go = head;go!=NULL;go=go->next){
            if (m){
                del = del->next;
            }
            if (val==n){
                m = 1;
            }
            val++;
        }
        if(!m){
            head = head->next;
        }
        else{
            del->next = del->next->next;
        }
        return head;
    }
};

int main(){
    ListNode *head;
    ListNode *res;
    ListNode *l1 = new ListNode(1);
    ListNode *l2 = new ListNode(2);
    ListNode *l3 = new ListNode(3);
    ListNode *l4 = new ListNode(4);
    ListNode *l5 = new ListNode(5);
    head = l1;
    l1->next = l2;
    l2->next = l3;
    l3->next = l4;
    l4->next = l5;
    int n = 2;

    Solution res1;
    res = res1.removeNthFromEnd(head, n);
    for (ListNode *mid = res;mid!=NULL;mid = mid->next){
        cout<<mid->val<<endl;
    }
}