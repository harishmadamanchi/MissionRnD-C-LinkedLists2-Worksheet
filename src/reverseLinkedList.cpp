/*
OVERVIEW: Given a single linked list, reverse the linked list.
E.g.: 1->2->3->4->5, output is 5->4->3->2->1.

INPUTS: A linked list.

OUTPUT: Reverse the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * reverseLinkedList(struct node *head) {
	if (head == NULL)
		return NULL;
	struct node *temp, *pre, *temp1;
	temp = head;
	pre = NULL;
	while (temp != NULL){
		temp1 = temp->next;
		temp->next = pre;
		pre = temp;
		temp = temp1;
	}
	head = pre;
}
