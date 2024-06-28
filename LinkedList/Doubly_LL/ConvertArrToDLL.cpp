#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node *prev;
    int data;
    Node *next;

    Node()
    {
        prev = NULL;
        data = 0;
        next = NULL;
    }

    Node(int value)
    {
        prev = NULL;
        data = value;
        next = NULL;
    }
};
class Solution
{
public:
    Node *constructDLL(vector<int> &arr)
    {
        // code here
        Node *head = new Node(arr[0]);
        Node *temp = head;
        for (int i = 1; i < arr.size(); i++)
        {
            Node *prevN = temp;
            Node *newN = new Node(arr[i]);
            temp->next = newN;
            temp = newN;
            temp->prev = prevN;
        }
        return head;
    }
};