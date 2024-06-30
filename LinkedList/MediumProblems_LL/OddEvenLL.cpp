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
    ListNode *oddEvenList(ListNode *head)
    {
        // 0,1 or 2 nodes won't make any difference
        if (!head || !head->next || !head->next->next)
            return head;

        ListNode *odd = head;
        ListNode *even = head->next;
        ListNode *even_start = head->next;

        while (odd->next && even->next)
        {
            odd->next = even->next;       // Connect all odds
            even->next = odd->next->next; // Connect all evens
            odd = odd->next;
            even = even->next;
        }
        odd->next = even_start; // Place the first even node after the last odd node.
        return head;
    }
};