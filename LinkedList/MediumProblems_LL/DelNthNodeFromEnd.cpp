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
    ListNode *deleteNodeRec(ListNode *head, int pos)
    {
        if (head == NULL)
            return NULL;
        if (pos == 0)
        {
            ListNode *res = head->next;
            delete (head);
            return res;
        }
        head->next = deleteNodeRec(head->next, pos - 1);
        return head;
    }
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        if (head == NULL || head->next == NULL)
            return NULL;
        ListNode *t = head;
        int ct = 1;
        while (t->next != NULL)
        {
            ct++;
            t = t->next;
        }

        if (ct == n)
        {
            ListNode *temp = head->next;
            delete (head);
            return temp;
        }
        int pos = ct - n;
        head->next = deleteNodeRec(head->next, pos - 1);
        return head;
    }
};