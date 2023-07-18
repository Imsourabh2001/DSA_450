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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* node;
        ListNode* start=head;
        int size=0;
        for(int i=0;start!=nullptr;start=start->next)
        {
            size++;
        }
        if(size==1)
        {
            head=nullptr;
            return head;
        }
        if(size==n)
        {
            node=head;
            head=node->next;
            return head;
        }
        int e=size-n;
        start=head;
        for(int i=0;i<e-1;i++)
        {
            start=start->next;
        }
        node=start->next;
        start->next=node->next;
        return head;
    }
};