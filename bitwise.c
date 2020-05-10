/*
 * =====================================================================================
 *
 *       Filename:  bitwise.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Wednesday 18 December 2019 11:39:29  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  ABINASH DASH (), abinashdash17@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
void calculate_the_maximum(int n,int k){
	int max_and = 0;
	int max_or = 0;
	int max_xor = 0;
	
	for ( int i = 1; i < n+1; i += 1 ) {
		for ( int j = i+1; j < n+1; j += 1 ) {
			if ((i&j)>max_and && (i&j)<k) max_and=i&j;
			if ((i|j)>max_or && (i|j)<k) max_or=i|j;
			if ((i^j)>max_xor && (i^j)<k) max_xor=i^j;
		}
	}
	printf ( "%d\n",max_and );
	printf ( "%d\n",max_or );
	printf ( "%d\n",max_xor );
}
int main() {
	int n,k;
	scanf ( "%d %d", &n,&k );
	calculate_the_maximum(n,k);
	return 0;
}
