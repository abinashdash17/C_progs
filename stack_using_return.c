/*
 * =====================================================================================
 *
 *       Filename:  ptr_to_ptr.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Monday 13 April 2020 08:22:48  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

struct node {
	int value;
	struct node* next;
};				/* ----------  end of struct node  ---------- */

int ind = -1;
typedef struct node Node;
Node* push(Node* ptr,int num){
	Node* temp = (Node*) malloc(sizeof(Node));
	temp -> value = num;
	temp -> next = ptr;
	ind++;
	return temp;
}
void show(Node* top){
	Node* ptr = top;
	for ( int i = ind; i > -1; i -= 1 ) {
		printf ( "%dth element is %d\n",i,ptr->value );
		ptr = ptr -> next;
	}
}
int pop(Node** pptr){
	Node* temp = *pptr;
	int num = temp -> value;
	*pptr = temp -> next;
	free(temp);
	ind--;
	return num;
}
int main(){
	Node *ptr_n = NULL;
	int n = 5,k = 2,po;
	for ( int i = 0; i < n; i += 1 ) {
		ptr_n = push(ptr_n,2*i);
	}
	show(ptr_n);
	printf ( "\n" );
	for ( int i = 0; i < k; i += 1 ) {
		po = pop(&ptr_n);
		printf ( "%d is popped\n",po );
	}
	show(ptr_n);
	return 0;
}
