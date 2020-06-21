#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode*temp=new ListNode(-1);
    ListNode*head=temp;
    if(l1==NULL)
    {
    return l2;
    }
    if(l2==NULL)
    {
        return l1;
    }
    while(l1!=NULL&&l2!=NULL)
    {
        if(l1->val<=l2->val)
        {
            temp->next=l1;
            l1=l1->next;
        }
        else
        {
            temp->next=l2;
            l2=l2->next;
        }
        temp=temp->next;
    }
    if(l1!=NULL)
        {
            temp->next=l1;
        }
        if(l2!=NULL)
        {
        temp->next=l2;
        }

    return head->next;
}