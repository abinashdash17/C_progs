/*
 * =====================================================================================
 *
 *       Filename:  arr5.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Sunday 15 December 2019 03:50:08  IST
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
int main() {
	int temp,n,index = -1,exists = 0;
	scanf ( "%d", &n );
	if (n!=0) 
		index = 0;
	int *pa = (int *) malloc(sizeof(temp)*n);
	int *pb = (int *) malloc(sizeof(temp)*n);
	
	for ( int i = 0; i < n; i += 1 ) {
		scanf ( "%d", &temp );
		*(pa+i) = temp;
	}
	*(pb) = *(pa);
	for ( int i = 0; i < n; i += 1 ) {
		exists = 0;
		for ( int j = 0; j <=index ;j += 1 ) {

			if ( *(pa+i) == *(pb+j) ) {
				exists = 1;
			}
		}
		if (exists == 0 ) {
			index++;
			*(pb+index) = *(pa+i);
		}
	}
	int *pc = (int *) calloc((index+1),sizeof(temp));

	for ( int i = 0; i < index+1; i += 1 ) {
		for ( int j = 0; j < n; j += 1 ) {
			if( *(pa+j) == *(pb+i) )
				*(pc+i) = *(pc+i)+1;
		}
	}
	for ( int i = 0; i <= index; i += 1 ) {
		printf ( "%d \t",*(pb+i) );
	}
	printf ( "\n" );
	for ( int i = 0; i <= index; i += 1 ) {
		printf ( "%d \t",*(pc+i) );
	}
	//printf ( "no. of Duplicate elements = %d\n",dup );
	return 0;
}
