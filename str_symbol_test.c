/*
 * =====================================================================================
 *
 *       Filename:  str_symbol_test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Monday 13 April 2020 10:28:41  IST
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
struct node{
	int value;
	struct node* next;
};
typedef struct node Node;
int main(){
	Node n,*ptr_n;
	n.value = 5;
	n.next = NULL;
	ptr_n = &n;
	printf ( "%d %d %d\n",n.value,*(ptr_n).value,ptr_n -> value );
	return 0;
}
