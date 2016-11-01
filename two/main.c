#include <stdio.h>
#include <stdlib.h>
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);

  struct ListNode {
      int val;
      struct ListNode *next;
  };

int main()
{
    struct ListNode *head,*a,*p,*re;
    a=(struct ListNode *)malloc(sizeof(struct ListNode));
    a->val=2;
    head=a;
    p=a;
    a=(struct ListNode *)malloc(sizeof(struct ListNode));
    a->val=4;
    p->next=a;
    p=a;
    p->next=NULL;

    struct ListNode *hea,*z,*l;
    z=(struct ListNode *)malloc(sizeof(struct ListNode));
    z->val=5;
    hea=z;
    l=z;
    z=(struct ListNode *)malloc(sizeof(struct ListNode));
    z->val=6;
    l->next=z;
    l=z;
    z=(struct ListNode *)malloc(sizeof(struct ListNode));

    l->next=NULL;
    re=addTwoNumbers(head,hea);
    p=re->next;
    l=p->next;
    printf("%d,%d,%d",re->val,p->val,l->val);
    return 0;
}


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *mNode,*mReplaceNode,*head;
    int num,sign=0;
    mNode=(struct ListNode *)malloc(sizeof(struct ListNode));
    mReplaceNode=(struct ListNode *)malloc(sizeof(struct ListNode));
    head=mNode;
    while(l1!=NULL||l2!=NULL){
        if(l1!=NULL&&l2!=NULL){
            num=l1->val+l2->val+sign;
        }else{
            if(l1==NULL)
                num=l2->val+sign;
            else num=l1->val+sign;
        }
        if(num>=10){
            num=num%10;
            sign=1;
            mNode->val=num;
        }else{
            sign=0;
            mNode->val=num;
        }
        mReplaceNode->next=mNode;
        mReplaceNode=mNode;
        mNode=(struct ListNode *)malloc(sizeof(struct ListNode));

        if(l1!=NULL&&l2!=NULL){
            l1=l1->next;
            l2=l2->next;
        }else{
            if(l1==NULL)
                l2=l2->next;
            else l1=l1->next;
        }
    }
    if(sign==1){
        mNode->val=1;
        mReplaceNode->next=mNode;
        mReplaceNode=mNode;
    }else free(mNode);
    mReplaceNode->next=NULL;
    return head;
}
