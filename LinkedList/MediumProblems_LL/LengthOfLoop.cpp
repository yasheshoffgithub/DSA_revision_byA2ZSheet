#include <bits/stdc++.h>>
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
int countNodesinLoop(struct Node *head)
{
    // Code here
    // O(N) space
    if (head->next == nullptr)
        return 0;
    unordered_map<Node *, int> mp;
    Node *temp = head;
    int len = 1;
    while (temp->next != NULL)
    {
        if (mp.find(temp) != mp.end())
            return len - mp[temp];
        mp[temp] = len++;
        temp = temp->next;
    }
    return 0;
}