/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode     *newHead;

    if (head == NULL || head->next == NULL)
        return (head);
    
    newHead = reverseList(head->next);

    head->next->next = head;
    head->next = NULL;

    return (newHead);
}