#include <bits/stdc++.h>
using namespace std;

//User function Template for C++


class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};


class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        // code here
        vector<pair<int, int>>ans;
        Node *left=head;
        Node *right=head;
        while(right->next!=NULL) right=right->next;
        while(left->data<right->data){
            if(left->data+right->data==target){
                ans.push_back({left->data,right->data});
                left=left->next;
                right=right->prev;
            }
            else if(left->data+right->data>target) right=right->prev;
            else left=left->next;
        }
        return ans;
    }
};