/*
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.
*/

#include <stddef.h>

using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
        ListNode(int x) :
       val(x), next(NULL)
   {
}
   };
   
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    	
    	if (l1 == NULL)
        {
            return l2;
        }
        if (l2 == NULL)
        {
            return l1;
        }
        ListNode *p=new ListNode(0);
        ListNode *L=p;        
        int t=makesum(l1,l2,p);
        
        ListNode* longer = l1 ? l1 : l2;
        while (longer)
        {
		int s=longer->val+t;
		t=s/10;
		ListNode *q=new ListNode(s%10);
		p->next=q;
		p=p->next;
		longer=longer->next;
		}
        if (t)
        {
        	p->next=new ListNode(t);
        	
		}
        

		ListNode *result=L->next;
		delete L;
		return result;
    }
    int makesum(ListNode *& l1,ListNode *& l2, ListNode *& p)
    {
    	
    	    int t=0;
			while (l1 &&l2)
			{
					  	
        	int s=l1->val+l2->val+t;
			t=s/10;

        ListNode  *q=new ListNode(s%10);
		p->next=q;      
		p=p->next;
		l1=l1->next;
		l2=l2->next;
    }
    return t;
	}
};

int main(int argc,char * argv[])
{
	
	ListNode *l1,*l2;
	
	
	
 } 
