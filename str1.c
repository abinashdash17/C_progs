/*
 * =====================================================================================
 *
 *       Filename:  str1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Monday 16 December 2019 12:56:35  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  ABINASH DASH (), abinashdash17@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main() {
	int n;
	scanf ( "%d", &n );
	char test[9][10]= { "one","two","three","four","five","six","seven","eight","nine"};	
	int tr = 1;
	for ( int i = 0; i < 9; i += 1 ) {
		if (i==n-1){
			printf ( "%s\n",test[i] );
			tr = 0;
		}
	}
	if (tr ==1)
		printf ( "Greater than 9" );
	return 0;
}
