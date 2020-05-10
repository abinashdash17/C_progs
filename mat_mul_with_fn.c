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
void mat_mul(int* ,int *,int *, int);
int main(){
	int A[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
	int B[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
	int C[3][3];
	int n = 3;
	mat_mul((int* ) A,(int* ) B,(int* ) C,n);	
	for ( int i = 0; i < 3; i += 1 ) {
		for ( int j = 0; j < 3; j += 1 ) {
			printf ( "%d ",C[i][j] );
		}
		printf ( "\n" );
	}
	return 0;

}
void mat_mul(int* A,int* B,int* C, int n){
	for ( int i = 0; i < n; i += 1 ) {
		for ( int j = 0; j < n; j += 1 ) {
			*(C+i*n+j) = 0;
			for ( int k = 0; k < 3; k += 1 ) {
				 *(C+i*n+j)+= *(A+i*n+j) *  *(B+i*n+j);
			}
		}
	}
}
