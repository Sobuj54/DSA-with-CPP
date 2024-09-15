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
class Solution
{
public:
    void insertAtTail(ListNode *&head, ListNode *&tail, int val)
    {
        ListNode *newNode = new ListNode(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void reverse(ListNode *&head, ListNode *cur)
    {
        if (cur->next == NULL)
        {
            head = cur;
            return;
        }
        reverse(head, cur->next);
        cur->next->next = cur;
        cur->next = NULL;
    }

    bool isPalindrome(ListNode *head)
    {
        ListNode *newHead = NULL;
        ListNode *newTail = NULL;
        ListNode *temp = head;
        while (temp != NULL)
        {
            insertAtTail(newHead, newTail, temp->val);
            temp = temp->next;
        }
        reverse(newHead, newHead);
        while (head != NULL)
        {
            if (head->val != newHead->val)
                return false;
            head = head->next;
            newHead = newHead->next;
        }
        return true;
    }
};