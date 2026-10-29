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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr)
        return head;
        ListNode* temp1=head;
        ListNode* temp2=head;
        int count=0;
        while(temp1->next!=nullptr)
        {
            temp1=temp1->next;
            count++;
        }
        count++;
        int i=k%count;
        if(i==0)
        return head;
        i=count-i-1;
        int j=0;
        while(j<i)
        {
            temp2=temp2->next;
            j++;
        }
        temp1->next = head;
        temp1=temp2->next;
        temp2->next=nullptr;
        return temp1;
    }
};