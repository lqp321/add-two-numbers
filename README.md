# add-two-numbers
#2
//leetcode algorithms #2
/* descriptions:
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
   struct ListNode* head=(struct ListNode*)malloc(sizeof(struct ListNode));
   struct ListNode* tail=head;
   int a=0,b=0,c=0,d=0;
   while(l1!=NULL&&l2!=NULL)
   {
       a=l1->val;
       b=l2->val;
       d=(a+b+c)%10;
       c=(a+b+c)/10;
       tail->next=(struct ListNode*)malloc(sizeof(struct ListNode));
       tail=tail->next;
       tail->val=d;       
       l1=l1->next;
       l2=l2->next;                                    
   }
   l1=l1?l1:l2;
   while(l1!=NULL)
         {
             a=l1->val;
          d=(a+c)%10;
         c=(a+c)/10;
         tail->next=(struct ListNode*)malloc(sizeof(struct ListNode));
       tail=tail->next;
        tail->val=d; 
          l1=l1->next;
         }
         if(c!=0)
         {
             tail->next=(struct ListNode*)malloc(sizeof(struct ListNode));
            tail=tail->next;
            tail->val=c; 
        }
                tail->next=NULL;
             return head->next;
       
}
