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
