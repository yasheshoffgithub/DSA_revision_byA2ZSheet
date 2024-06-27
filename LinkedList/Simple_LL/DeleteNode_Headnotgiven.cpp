#include <bits/stdc++.h>
using namespace std;
//  * Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        // overwrite: we don't have access to the previous pointer so we cannot delete current node and store prev->next=node->next.
        // so we simply overwrite the current node's value as node->next value and node->next=node->next->next to unlink the next node(to avoid duplicate)
        // O(1)
        node->val = node->next->val;
        ListNode *temp = node->next;
        node->next = node->next->next;
        delete temp;
    }
};