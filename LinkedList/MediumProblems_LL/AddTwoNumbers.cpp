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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        if (l1->val == 0 && l1->next == NULL)
            return l2;
        if (l2->val == 0 && l2->next == NULL)
            return l1;
        ListNode *t1 = l1;
        ListNode *t2 = l2;
        ListNode *head = NULL;
        ListNode *tail = NULL;
        int ct = 0;
        int c = 0;
        while (t1 != NULL && t2 != NULL)
        {
            if (t1->next == NULL && t2->next == NULL)
                c = (t1->val + t2->val + ct);
            else
                c = (t1->val + t2->val + ct) % 10;
            ListNode *newnode = new ListNode(c);
            ct = (t1->val + t2->val + ct) / 10;
            if (head == NULL)
            {
                head = newnode;
                tail = newnode;
            }
            else
            {
                tail->next = newnode;
                tail = tail->next;
            }
            t1 = t1->next;
            t2 = t2->next;
        }
        if (t1 == NULL && t2 == NULL)
        {
            if (ct == 0)
                return head;
            if (ct == 1 && tail->val > 9)
            {
                ListNode *n = new ListNode(1);
                // tail->val+=ct;
                tail->val %= 10;
                // tail->val=0;
                tail->next = n;
                return head;
            }
            else
            {
                tail->val += ct;
                return head;
            }
        }
        if (t1 == NULL)
        {
            tail->next = t2;
            if ((t2->val + ct) < 10)
            {
                t2->val += ct;
                return head;
            }
        }
        if (t2 == NULL)
        {
            tail->next = t1;
            if ((t1->val + ct) < 10)
            {
                t1->val += ct;
                return head;
            }
        }
        if (t1 == NULL)
        {
            while (t2->next != NULL && (t2->val + ct) > 9)
            {
                t2->val = (t2->val + ct);
                ct = (t2->val) / 10;
                t2->val %= 10;
                t2 = t2->next;
            }
            if ((t2->val + ct) < 10)
            {
                t2->val += ct;
                return head;
            }
            else
            {
                ListNode *n = new ListNode(1);
                t2->val = 0;
                t2->next = n;
                return head;
            }
        }
        if (t2 == NULL)
        {
            while (t1->next != NULL && (t1->val + ct) > 9)
            {
                t1->val = (t1->val + ct);
                ct = (t1->val) / 10;
                t1->val %= 10;
                t1 = t1->next;
            }
            if ((t1->val + ct) < 10)
            {
                t1->val += ct;
                return head;
            }
            else
            {
                ListNode *n = new ListNode(1);
                t1->val = 0;
                t1->next = n;
                return head;
            }
        }
        return head;
    }
};