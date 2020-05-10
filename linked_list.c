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

int main(int argc,char **argv){
	struct LL *head = NULL;
	struct LL *sec = NULL;
	struct LL *third = NULL;

	head = (struct LL *) malloc(1* sizeof(struct LL));
	sec = (struct LL *) malloc(1* sizeof(struct LL));
	third = (struct LL *) malloc(1* sizeof(struct LL));

	head->val = 2;
	head->next = sec;
	printf ( "%d\n",head->val );

	sec->val = 3;
	sec->next = third;

	third->val = 5;
	third->next = NULL;

	return 0;

}
