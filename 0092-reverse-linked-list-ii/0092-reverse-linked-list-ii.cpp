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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right)
        return head;
        ListNode* dummy= new ListNode(0);
        dummy->next=head;
        ListNode* temp=dummy;
        ListNode* prev;
        ListNode* curr;
        ListNode* nextNode;
        int i=0;
        while(i<left-1)
        {
            temp=temp->next;
            i++;
        }
        prev=temp->next;
        ListNode* leftnode=prev;
        curr=prev->next;
        i=left;
        while(i<right)
        {
            nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
            i++;
        }
        leftnode->next=nextNode;
        temp->next=prev;
        return dummy->next;
    }
};