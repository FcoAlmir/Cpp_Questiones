/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *i1 = l1, *i2 = l2, *i3 = nullptr, *l3 = nullptr;
        int vaium = 0;
        int sum = i1->val + i2->val;

        if(sum > 9) {
            vaium = 1;
            l3 = new ListNode(sum % 10);
        }

        else {
            l3 = new ListNode(sum);
        }

        i1 = i1->next; i2 = i2->next; i3 = l3;


        while(i1 != nullptr && i2 != nullptr) {
            sum = i1->val + i2->val;
            if(vaium == 1) {
                sum++;
                vaium = 0;
            }

            if(sum > 9) {
                ListNode *newNode = new ListNode(sum % 10);
                i3->next = newNode;
                i3 = newNode;
                vaium = 1;
            }

            else {
                ListNode *newNode = new ListNode(sum);
                i3->next = newNode;
                i3 = newNode;
            }

            i1 = i1->next;
            i2 = i2->next;
        }

        while(i1 != nullptr) {
            if(vaium == 1 && i1->val == 9) {
                ListNode *newNode = new ListNode();
                i3->next = newNode;
                i3 = newNode;
            }

            else if(vaium == 1) {
                ListNode *newNode = new ListNode(i1->val + 1);
                vaium = 0;
                i3->next = newNode;
                i3 = newNode;
            }

            else {
                ListNode *newNode = new ListNode(i1->val);
                i3->next = newNode;
                i3 = newNode;
            }

            i1 = i1->next;
        }

        while(i2 != nullptr) {
            if(vaium == 1 && i2->val == 9) {
                ListNode *newNode = new ListNode();
                i3->next = newNode;
                i3 = newNode;
            }

            else if(vaium == 1) {
                ListNode *newNode = new ListNode(i2->val + 1);
                vaium = 0;
                i3->next = newNode;
                i3 = newNode;
            }

            else {
                ListNode *newNode = new ListNode(i2->val);
                i3->next = newNode;
                i3 = newNode;
            }

            i2 = i2->next;
        }




        if(vaium == 1) {
            ListNode *newNode = new ListNode(1);
            i3->next = newNode;
            i3 = newNode;
        }

        return l3;
    }
};