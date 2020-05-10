/*
 * =====================================================================================
 *
 *       Filename:  sum_digits.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Monday 16 December 2019 01:33:36  IST
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
	int n,sum=0,p,dig;
	scanf ( "%d", &n );
	p = n;
	for ( int i = 1; i < 6; i += 1 ) {
		dig = p%10;
		p = p/10;
		sum = sum +dig;
	}
	printf ( "%d",sum );
	return 0;
}
