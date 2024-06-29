#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *deleteMiddle(ListNode *head)
    {
        ListNode *fast = head;
        ListNode *slow = head;
        ListNode *prev = head;
        if (head == NULL)
        {
            return NULL;
        }
        if (head->next == NULL)
        {
            delete head;
            return NULL;
        }
        int i = 0;
        while (fast != NULL && fast->next != NULL)
        {
            if (i > 0)
            {
                prev = prev->next;
            }
            slow = slow->next;
            fast = fast->next->next;
            i++;
        }

        prev->next = slow->next;
        delete slow;
        return head;
    }
};