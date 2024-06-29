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
    ListNode *detectCycle(ListNode *head)
    {
        // approach 1->using map to store values and detect repeating value- O(N) space
        // approach 2->slow,fast pointer- O(1) space
        //  making two pointers fast and slow and assignning them to head
        ListNode *fast = head;
        ListNode *slow = head;

        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
            // when they meet,distance from this point to starting point= distance from head to starting point of loop
            if (fast == slow)
            {
                slow = head;
                while (slow != fast)
                {
                    slow = slow->next;
                    fast = fast->next;
                }
                // when given equal speeds both slow and fast meet at the starting point so return any of them
                return slow;
            }
        }
        // no loop exists
        return nullptr;
    }
};