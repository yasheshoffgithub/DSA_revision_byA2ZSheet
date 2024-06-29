#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    // Function to sort a linked list of 0s, 1s and 2s.
    Node *segregate(Node *head)
    {

        // Add code here
        map<int, int> mp;
        Node *temp = head;
        while (temp != NULL)
        {
            mp[temp->data]++;
            temp = temp->next;
        }
        temp = head;
        while (temp != NULL)
        {
            int val = mp.begin()->first;
            temp->data = val;
            mp[val]--;
            if (mp[val] == 0)
                mp.erase(val);
            temp = temp->next;
        }
        return head;
    }
};