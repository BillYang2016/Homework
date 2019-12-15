#include<stdio.h>
#include<stdlib.h>

struct ListNode {
	int val;
	struct ListNode *next;
};

#define N 5

struct ListNode* deleteDuplicates(struct ListNode *head);

int main() {
	struct ListNode *head,*now,*last;
	head=now=last=(struct ListNode *)malloc(sizeof(struct ListNode));
	for(int i=0; i<N; i++) {
		scanf("%d->",&now->val);
		if(i==0)head=now;
		else last->next=now;
		last=now;
		now=(struct ListNode *)malloc(sizeof(struct ListNode));
	}
	struct ListNode *nhead=deleteDuplicates(head);
	while(nhead->next!=NULL) {
		printf("%d->",nhead->val);
		nhead=nhead->next;
	}
	printf("%d\n",nhead->val);
	return 0;
}

struct ListNode* deleteDuplicates(struct ListNode *head) {
	struct ListNode *f=head;
	while(head->next!=NULL) {
		if(head->val==head->next->val)head->next=head->next->next;
		else head=head->next;
	}
	return f;
}