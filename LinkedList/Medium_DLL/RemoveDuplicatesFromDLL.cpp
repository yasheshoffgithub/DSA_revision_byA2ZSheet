#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};


class Solution{
    
    public:

    Node * removeDuplicates(struct Node *head){
        
        Node *temp = head;
        
        while(temp){
            // Duplicate found
            if(temp->next && temp->data == temp->next->data)
            {
                
                if(temp == head){
                    head = head->next;
                }
                // Delete temp and move forward
                Node *todel = temp;
                if(temp->next) temp->next->prev = temp->prev;
                if(temp->prev) temp->prev->next = temp->next;
                temp = temp->next;
                delete todel;
                
            }
            else{
                temp = temp->next;
            }
            
        }
        
        return head;
        
    }
};