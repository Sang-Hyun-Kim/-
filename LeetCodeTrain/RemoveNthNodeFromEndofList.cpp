#include "RemoveNthNodeFromEndofList.h"


  struct ListNode {
       int val;
       ListNode *next;
       ListNode() : val(0), next(nullptr) {}
       ListNode(int x) : val(x), next(nullptr) {}
       ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* first = head;
        ListNode* second = head;
        //ListNode* temp = nullptr;
        while (n--)
        {
            if (first->next == nullptr)
            {
                return head->next;
            }
            first = first->next;
            if (first == nullptr) return first;

        }

        while (first->next)
        {
            first = first->next;
            second = second->next;
        }
        //temp = second->next;
        second->next = second->next->next;
        //delete temp;
        return head;

    }
};