#include <bits/stdc++.h>
using namespace std;
class SortedStack{
public:
	stack<int> s;
	void sort();
};
void solve(stack<int> &sort, int element){
    if((!sort.empty() && sort.top()<element) || sort.empty()){
        sort.push(element);
        return;
    }
    
    int n = sort.top();
    sort.pop();
    
    solve(sort,element);
    sort.push(n);
}
void sorted(stack<int> &s){
    if(s.empty()){
       return;
   }
   
   int num = s.top();
   s.pop();
   
   sorted(s);
   
   solve(s,num);
}
void SortedStack:: sort()
{
   sorted(s);
}