/*
 * =====================================================================================
 *
 *       Filename:  stack_ops_using_ll.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Friday 10 April 2020 09:59:27  IST
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
struct Stack{
	int value;
	struct Stack* next;
};
typedef struct Stack stack;
void push(stack*,int);
int pop(stack*);
void showstack(stack*);
int top = -1;
int MAX = 20;
int main(){
	char ch;
	stack* s1=(stack*) malloc(sizeof(stack));
	int num;
	while(1){
		printf ( "enter a choice(push-a,pop-d,show-s,exit-e:\n" );
		scanf ( " %c", &ch );
		switch (ch){
			case 'a':
				printf("Enter a num: ");
				scanf ( "%d", &num );
				push(s1,num);
				printf ( "%d\n", s1 -> value );
				break;
			case 'd':
				num = pop(s1);
				printf("%d is poped\n",num);
				break;
			
			case 's':
				showstack(s1);
				break;
			
			case 'e':
				exit(0);
				break ;
			case '\n':
				break;
			
			default :
				printf ( "enter a valid choice\n" );

		}
	}
}
void push(stack* s,int num){
	if(top == -1){
		top++;
		s -> value = num;
		s -> next = NULL;
		printf ( "%d\n", s -> value );
	}
	else if(top == MAX-1){
		printf ( "stack overflow\n" );
	}
	else {
		top++;
		stack* t = s -> next;
		s -> next = NULL;
		s -> next = (stack*) malloc(sizeof(stack));
		s -> next -> value = num;
		s -> next ->next = s;
		s = s -> next;
		s -> next -> next = t;
		printf ( "%d %d\n",s -> value,s ->next -> value );
	}
}
int pop(stack* s){
	if(top == -1){
		return '\0';
	}
	else{
		int temp = s -> value;
		s = s -> next;
		top--;
		return temp;
	}
}
void showstack(stack* s){
	stack* temp=s;
	while(temp!=NULL){
		printf ( "%d\n" ,temp -> value);
		temp = temp -> next;
	}
}
