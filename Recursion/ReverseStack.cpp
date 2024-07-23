#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    void insert(stack<int> &St,int x){
        if(St.size()==0) {
            St.push(x);
            return;
        }
        int a=St.top();
        St.pop();
        insert(St,x);
        St.push(a);
    }
    void Reverse(stack<int> &St){
        if(St.size()==1) return ;
        int x=St.top();
        St.pop();
        Reverse(St);
        insert(St,x);
    }
};