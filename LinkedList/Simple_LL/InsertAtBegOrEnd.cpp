#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Solution
{
public:
    // Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x)
    {
        // Your code here
        Node *t = new Node(x);
        t->next = head;
        head = t;
        // delete *t;
        return head;
    }

    // Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)
    {
        // Your code here
        if (head == NULL)
        {
            Node *t = new Node(x);
            head = t;
            return head;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        Node *t = new Node(x);
        temp->next = t;
        temp = t;
        // temp->next=NULL;
        // delete *t;
        return head;
    }
};