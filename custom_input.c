/*
 * =====================================================================================
 *
 *       Filename:  custom_input.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Friday 27 December 2019 12:33:33  IST
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
int main(){
	int n,*arr;
	scanf ( "%d", &n );
	arr = (int *) malloc(n*sizeof(int));
	for ( int i = 0; i < n; i += 1 ) {
		scanf ( "%d", arr+i);
	}
	for ( int i = 0; i < n; i += 1 ) {
		printf ( "%d\n",arr[i] );
	}
	return 0;
}
