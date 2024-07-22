#include <bits/stdc++.h>
using namespace std;

// User function Template for C++
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; 

class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        // Write your code here
        if(*head_ref==NULL) return ;
        Node* head = (*head_ref);
        while(head!=NULL and head->data==x) head = head->next;
        if(head!=NULL) head -> prev = NULL;
        *head_ref = head;
        Node* prev = head;
        while(head!=NULL){
            while(head->next!=NULL and head->next->data==x){
                    head->next = head->next->next;
                    if(head->next!=NULL) head->next->prev = prev;
                }
                prev = head;
                head = head -> next;
            }
        }
};