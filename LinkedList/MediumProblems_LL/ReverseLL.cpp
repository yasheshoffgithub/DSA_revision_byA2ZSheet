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
    ListNode *reverseList(ListNode *head)
    {
        // iterative approach
        if (head == NULL)
            return head;
        ListNode *prev = nullptr;
        ListNode *temp = head;
        while (temp != nullptr)
        {
            if (prev == nullptr)
                prev = head;
            ListNode *nextN = temp->next;
            temp->next = prev;
            if (prev == head)
                prev->next = nullptr;
            prev = temp;
            temp = nextN;
        }
        return prev;
        // recursive approach
    }
};