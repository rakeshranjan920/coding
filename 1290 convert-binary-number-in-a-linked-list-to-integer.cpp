#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int getDecimalValue(ListNode* head) {
    int number = 0, length = 0;
    ListNode *pHead = head;
    while(pHead) {
        length++;
        pHead = pHead->next;
    }
    length--;
    while(head) {
        number += head->val * pow(2, length--);
        head = head->next;
    }
    return number;       
}