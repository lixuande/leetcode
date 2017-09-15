/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    if(l1==NULL||l2==NULL)
    {
        return NULL;
    }
    
    struct ListNode* p=NULL;
    struct ListNode* q=NULL;
    bool lastBeAdd=false;

    for(p=l1,q=l2;p->next!=NULL&&q->next!=NULL;p=p->next,q=q->next)
    {
        p->val=p->val+q->val;
        if(p->val>9)
        {
            p->val=p->val%10;
            p->next->val+=1; 
        }
    }
    
    if(p->next==NULL&&q->next==NULL)
    {
        p->val=p->val+q->val;
        if(p->val>9)
        {
            struct ListNode* tmp=(struct ListNode*)malloc(sizeof(struct ListNode)*1);
            tmp->val=1;
            tmp->next=NULL;
            p->val=p->val%10;
            p->next=tmp; 
        }
    }
    else if(p->next==NULL&&q->next!=NULL)
    {
        p->next=q->next;
        p->val=p->val+q->val;
        for(;p->next!=NULL;p=p->next)
        {
            if(p->val>9)
            {
                p->val=p->val%10;
                p->next->val+=1;
            }
            else
            {
                break;
            }
        }
        
        if(p->val>9)
        {
            struct ListNode* tmp=(struct ListNode*)malloc(sizeof(struct ListNode)*1);
            tmp->val=1;
            tmp->next=NULL;
            p->val=p->val%10;
            p->next=tmp; 
        }
    }
    else
    {
        p->val=p->val+q->val;
        for(;p->next!=NULL;p=p->next)
        {
            if(p->val>9)
            {
                p->val=p->val%10;
                p->next->val+=1;
            }
            else
            {
                break;
            }
        }
        
        if(p->val>9)
        {
            struct ListNode* tmp=(struct ListNode*)malloc(sizeof(struct ListNode)*1);
            tmp->val=1;
            tmp->next=NULL;
            p->val=p->val%10;
            p->next=tmp; 
        }
    }
    
    return l1;
    
    
    
}
