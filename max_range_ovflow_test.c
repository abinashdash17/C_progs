/*
 * =====================================================================================
 *
 *       Filename:  max_range_ovflow_test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Friday 01 May 2020 12:29:22  IST
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
#include <limits.h>

int main(){
	int a= INT_MAX - 5;
	printf ( "%u \n",INT_MAX );
	printf ( "\n" );
	for ( unsigned int i = 0; i < 10; i += 1 ) {
		printf ( "%u\n",a++ );
	}
	return 0;
}

