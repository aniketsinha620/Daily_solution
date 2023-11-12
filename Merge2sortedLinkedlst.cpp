#include<bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if(l1 == NULL)
        return l2;
    else if(l2 == NULL)
        return l1;

    ListNode* newNode = new ListNode(0); // assuming ListNode constructor takes an integer value
    ListNode* temp = newNode;

    while(l1 && l2) {
        if(l1->val < l2->val) {
            temp->next = l1;
            l1 = l1->next;
        } else {
            temp->next = l2;
            l2 = l2->next;
        }
        temp = temp->next;
    }

    if(l1 == NULL)
        temp->next = l2;
    else if(l2 == NULL)
        temp->next = l1;

    return newNode->next;
}

int main(){
    // You can add test cases or create linked lists here if needed.
 
    return 0;
}
