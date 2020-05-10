/*
 * =====================================================================================
 *
 *       Filename:  dyn_arr.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Friday 13 December 2019 04:44:01  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(){
	int max_size,temp;
	scanf("%d",&max_size);
	int *arr = (int *) malloc(sizeof(temp) * max_size);
	
	for ( int i = 0; i < max_size; i += 1 ) {
		scanf("%d",&temp);
		*(arr+i) = temp;
	}
	
	for ( int i = max_size-1; i > -1 ; i -= 1 ) {
		printf("%d ",*(arr+i));
	}
	return 0;
}
