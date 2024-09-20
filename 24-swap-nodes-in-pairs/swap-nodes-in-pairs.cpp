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
    ListNode* swapPairs(ListNode* head) {
        if (head==NULL || head->next==NULL){
            return head;
        }
        ListNode* p1 = head;
        ListNode* p2 = p1->next;
        head = p2;
        while (p1->next!=NULL){
            if(p2->next==NULL ){
                p1->next=NULL;
                p2->next=p1;
                break;
            }
            else{
                if(p2->next->next==NULL){
                p1->next=p2->next;
                p2->next=p1;
                break;
                }
                else{
                    p1->next=p2->next->next;
                    ListNode *temp=p2->next;
                    p2->next=p1;
                    p1=temp;
                    p2=p1->next;
                }
            }
        }
        return head;
    }
};