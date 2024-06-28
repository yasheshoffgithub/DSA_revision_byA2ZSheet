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
    Node *deleteNode(Node *head, int x)
    {
        // Your code here
        int curr = 1;
        if (head->next == nullptr)
            return nullptr;
        if (curr == x)
        {
            Node *newH = head->next;
            newH->prev = nullptr;
            delete head;
            return newH;
        }
        Node *temp = head;
        while (temp != nullptr)
        {
            if (curr == x)
            {
                Node *prevN = temp->prev;
                Node *nextN = temp->next;
                prevN->next = nextN;
                if (nextN != nullptr)
                    nextN->prev = prevN;
                delete temp;
                break;
            }
            curr++;
            temp = temp->next;
        }
        return head;
    }
};