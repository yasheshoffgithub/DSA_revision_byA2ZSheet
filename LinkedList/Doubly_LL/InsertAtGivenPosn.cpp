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
void addNode(Node *head, int pos, int data)
{
    // Your code here
    int curr = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        if (curr == pos)
        {
            Node *newnode = new Node(data);
            newnode->prev = temp;
            newnode->next = temp->next;
            if (temp->next != NULL)
                temp->next->prev = newnode;
            temp->next = newnode;
            break;
        }
        curr++;
        temp = temp->next;
    }
}