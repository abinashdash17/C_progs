/*
 * =====================================================================================
 *
 *       Filename:  rotleft.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Saturday 02 May 2020 01:42:53  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Abinash Dash (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

int* rotLeft(int a_count, int* a, int d, int* result_count) {
	int count = 0;
	*result_count = a_count;
	int shift  = d%a_count;
	int* b = malloc(a_count * sizeof(*b));
	for ( int i = shift; i < a_count; i += 1 ) {
		b[count++] = a[i];
	}
	for ( int i = 0; i < shift; i += 1 ) {
		b[count++] = a[i];
	}
	return b; 
}


int main(){
	int sh = 4;
	int a[] = {1,2,3,4,5,6,7};
	int result_count = sizeof(a)/sizeof(a[0]);
	int* b = malloc(sizeof(*b));
	b = rotLeft(result_count,a,sh,&result_count);
	for ( int i = 0; i < result_count; i += 1 ) {
		printf ( "%d ",a[i] );
	}
	printf ( "\n" );
	for ( int i = 0; i < result_count; i += 1 ) {
		printf ( "%d ",b[i] );
	}
	printf ( "\n" );
	return 0;
}

