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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
        {
            return head;
        }
       ListNode dummy;
       dummy.next =head;
       ListNode* prev = &dummy;
       ListNode* curr = head;
       ListNode* nextNode= head;
       bool a= true;
       while(nextNode!=nullptr)
       {
            curr=nextNode;
            prev->next=nextNode;
            nextNode=nextNode->next;
            while(nextNode!=nullptr && curr->val==nextNode->val)
            {
                nextNode=nextNode->next;
                a=false;
            }
            if(a)
            {
                prev=prev->next;
            }
            a=true;
       } 
       prev->next=nextNode;
        return dummy.next;
    }
};