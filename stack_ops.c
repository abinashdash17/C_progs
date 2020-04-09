/*
 * =====================================================================================
 *
 *       Filename:  stack_ops.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Thursday 09 April 2020 05:58:13  IST
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
const int SZ = 100;
struct Stack{
	int arr[100];
	int top ;
};
typedef struct Stack stack;
void push(stack*,int);
int pop(stack*);
void showstack(stack*);

int main(){
	stack s,*s1;
	s1 = &s;
	char ch;
	int num;
	s1 -> top = -1;
	while(1){
		printf ( "enter a choice(push-a,pop-d,show-s,exit-e:\n" );
		scanf ( "%c", &ch );
		switch (ch){
			case 'a':{
				printf("Enter a num: ");
				scanf ( "%d", &num );
				push(s1,num);
				break;
			}
			case 'd':{
				num = pop(s1);
				printf("%d is poped",num);
				break;
			}
			case 's':{
				showstack(s1);
				break;
			}
			case 'e':{
				exit(0);
				break ;
			}
			default :
				printf ( "enter a valid choice\n" );

		}
	}
}
void push(stack* s,int n){
	if (s -> top == SZ-1){
		printf ( "stack overflow\n" );
	}
	else {
		s -> arr[++s -> top] = n;
	}
}
int pop(stack* s){
	if(s -> top == -1){
		printf ( "stack underflow\n" );
		return '\0';
	}
	else {
		return s -> arr[s -> top--];
	}

}
void showstack(stack* s){
	for ( int i = s -> top ; i > -1; i-- ) {
		printf ( "%d\n" , s -> arr[i]);
	}
}
