/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *previous=NULL;
    struct ListNode *temp;
    while(head){
        temp=head->next;
        head->next=previous;
        previous=head;
        head=temp;
    }
    return previous;
}
