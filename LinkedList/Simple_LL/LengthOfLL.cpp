#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
class Solution
{
public:
    // Function to count nodes of a linked list.
    int getCount(struct Node *head)
    {
        if (head->next == nullptr)
            return 1;
        Node *temp = head;
        int count = 1;
        while (temp->next != nullptr)
        {
            temp = temp->next;
            count++;
        }
        return count;
    }
};