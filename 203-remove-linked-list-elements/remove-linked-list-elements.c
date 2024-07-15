/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val)
{
    struct ListNode     *curr;
    struct ListNode     *prev;
    struct ListNode     *remove;

    curr = head;
    prev = NULL;
    while (curr != NULL && curr->val == val)
    {
        remove = curr;
        head = curr->next;
        curr = curr->next;
        free (remove);
    }
    while (curr)
    {
        if (curr->val == val)
        {
            remove = curr;
            prev->next = curr->next;
            curr = curr->next;
            free (remove);
        }
        else
        {
            prev = curr;
            curr = curr->next;
        }
    }
    return (head);
}