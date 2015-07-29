#include "header.h"

// Think twice and plan well before code

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int length(struct ListNode* l) {
    int ret = 0;
    while(l != NULL) {
        ++ret;
        l = l->next;
    }
    return ret;
}


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    if (length(l1) < length(l2)) {
        struct ListNode* tmp = l1;
        l1 = l2;
        l2 = tmp;
    }
    struct ListNode* ptr1 = l1;
    struct ListNode* ptr2 = l2;
    while(ptr2) {
        ptr1->val += ptr2->val;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    struct ListNode* ptr = l1;
    while(ptr){
        if (ptr->val >= 10){
            ptr->val -= 10;
            if(ptr->next){
                ptr->next->val += 1;
            } else {
                ptr->next = malloc(sizeof(struct ListNode));
                ptr->next->val = 1;
                ptr->next->next = NULL;
            }
        }
        ptr = ptr->next;
    }
    return l1;
}




