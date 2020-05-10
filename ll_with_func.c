/*
 * =====================================================================================
 *
 *       Filename:  linked_list.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Thursday 19 December 2019 07:39:29  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  ABINASH DASH (), abinashdash17@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct LL{
	int val;
	struct LL *next;
};
void update_node(struct LL* curr_ptr,int a,struct LL* next_ptr){
	curr_ptr->val = a;
	curr_ptr->next = next_ptr;
}

int main(int argc,char **argv){
	struct LL *head = NULL;
	struct LL *sec = NULL;
	struct LL *third = NULL;

	head = (struct LL *) malloc(1* sizeof(struct LL));
	sec = (struct LL *) malloc(1* sizeof(struct LL));
	third = (struct LL *) malloc(1* sizeof(struct LL));
	
	update_node(head,2,sec);
	printf ( "%d\n",head->val );
	
	update_node(sec,3,third);
	printf ( "%d\n",sec->val );
	
	//update_node(third,5,NULL);
	printf ( "%d\n",third->val );

	return 0;

}
