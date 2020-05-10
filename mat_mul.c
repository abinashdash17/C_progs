/*
 * =====================================================================================
 *
 *       Filename:  mat_mul.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Sunday 12 January 2020 12:43:13  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  ABINASH DASH (), abinashdash17@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int A[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
	int B[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
	int C[3][3];
	
	for ( int i = 0; i < 3; i += 1 ) {
		for ( int j = 0; j < 3; j += 1 ) {
			C[i][j] = 0 ;
		}
	}
	for ( int i = 0; i < 3; i += 1 ) {
		for ( int j = 0; j < 3; j += 1 ) {
			for ( int k = 0; k < 3; k += 1 ) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	for ( int i = 0; i < 3; i += 1 ) {
		for ( int j = 0; j < 3; j += 1 ) {
			printf ( "%d ",C[i][j] );
		}
		printf ( "\n" );
	}
	return 0;

}
