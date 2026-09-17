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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* l=list1;
        ListNode* r=list1;

        for(int i=0;i<a-1;i++){
            l=l->next;
        }
        for(int i=0;i<=b;i++){
            r=r->next;
        }
        ListNode* l2=list2;
        while(l2->next!=NULL){
            l2=l2->next;
        }
      
        l->next=list2;
        l2->next=r;

        return list1;

    }
};