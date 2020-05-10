/*
 * =====================================================================================
 *
 *       Filename:  non_zero.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Monday 30 March 2020 01:17:32  IST
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
	int a[]={0,1,0,3,12};
	int l = sizeof(a) / sizeof(a[0]);
	int b[l],j = 0;

	for ( int i = 0; i < l; i += 1 ) {
		if ( a[i] != 0 ){
			b[j] = a[i];
			j++;
		}
	}
	for ( int i = j; i < l; i += 1 ) 
		b[i] = 0;

	for ( int i = 0; i < l; i += 1 ) {
		printf ( "%d ",b[i] );
	}
	return 0;
}
