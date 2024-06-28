#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
    Node(int x)
    {
        data = x;
        next = prev = NULL;
    }
};
class Solution
{
public:
    Node *reverseDLL(Node *head)
    {
        // Your code here
        if (head->next == nullptr)
            return head;
        Node *temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        Node *newH;
        while (temp != nullptr)
        {
            if (temp->next == nullptr)
            {
                newH = temp;
            }
            Node *nextN = temp->next;
            Node *prevN = temp->prev;
            temp->next = prevN;
            temp->prev = nextN;
            temp = temp->next;
        }
        return newH;
    }
};