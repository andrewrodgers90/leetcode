/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    struct ListNode     *dummy;
    struct ListNode     *curr;
    struct ListNode     *merged;

    dummy = (struct ListNode *)malloc(sizeof(struct ListNode));
    if (NULL == dummy)
        return (NULL);
    curr = dummy;
    while (list1 != NULL && list2 != NULL)
    {
        if (list1->val < list2->val)
        {
            curr->next = list1;
            list1 = list1->next;
        }
        else
        {
            curr->next = list2;
            list2 = list2->next;
        }
        curr = curr->next;
    }
    if (NULL == list1)
        curr->next = list2;
    else if (NULL == list2)
        curr->next = list1;
    merged = dummy->next;
    free (dummy);
    return (merged);
}