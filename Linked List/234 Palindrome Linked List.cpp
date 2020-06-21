#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


bool isPalindrome(ListNode* head) {
    stack<int>s;
    ListNode*temp=head;
    while(temp!=NULL)
    {
        s.push(temp->val);
        temp=temp->next;
    }
    temp=head;
    bool flag=true;
    while(!s.empty())
    {
        if(s.top()!=temp->val)
        {
            flag=false;
            break;
        }
        s.pop();
        temp=temp->next;
    }
    return flag;
    
}