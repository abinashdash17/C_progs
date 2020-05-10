/*
 * =====================================================================================
 *
 *       Filename:  patr.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Wednesday 18 December 2019 02:32:47  IST
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
	int big_arr[9][9];	
	for ( int i = 0; i < 5; i += 1 ) {

		for ( int j = 0; j < 5; j += 1 ) {
			if (i>=j) big_arr[i][j] = 5-j;
			else 	big_arr[i][j]=5-i;	
		}
		
		for ( int j = 5; j < 9; j += 1 ) {
			big_arr[i][j] = big_arr[i][8-j];
		}
	}
	for ( int i = 5; i < 9; i += 1 ) {

		for ( int j = 0; j < 5; j += 1 ) {
			big_arr[i][j]=big_arr[8-i][j];
		}
		
		for ( int j = 5; j < 9; j += 1 ) {
			big_arr[i][j] = big_arr[i][8-j];
		}
	}


	for ( int i = 0; i < 9; i += 1 ) {

		for ( int j = 0; j < 9; j += 1 ) {
			printf ( "%d ",big_arr[i][j] );
		}
		printf ( "\n" );
	}
	return 0;
}

