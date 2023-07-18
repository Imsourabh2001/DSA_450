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
    ListNode* middleNode(ListNode* head) {
        int size=0;
        ListNode* start=nullptr;
        for(ListNode* start=head;start!=nullptr;start=start->next)
        {
            size++;
        }
        start=head;
        for(int i=0;i<size/2;i++)
        {
            start=start->next;
        }
        head=start;
        return head;
    }
};