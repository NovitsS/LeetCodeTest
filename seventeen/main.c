#include <stdio.h>
#include <stdlib.h>
 struct ListNode {
      int val;
      struct ListNode *next;
 };

 struct ListNode* swapPairs(struct ListNode* head);

int main()
{

    return 0;
}

struct ListNode* swapPairs(struct ListNode* head) {
    if(head==null||head->next==null)
        return head;
    struct ListNode *tmp = head->next;
    head->next = swapPairs(tmp->next);
    tmp->next = head;
    return tmp;
}
