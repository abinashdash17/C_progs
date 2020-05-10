/*
 * =====================================================================================
 *
 *       Filename:  hrank__bon_appetite.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Tuesday 21 April 2020 01:50:19  IST
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

void bonAppetit(int bill_count, int* bill, int k, int b) {
	int sum = 0;
	for ( int i = 0; i < k; i += 1 ) {
		sum+= bill[i];
	}
	for ( int i = k+1; i < bill_count; i += 1 ) {
		sum+= bill[i];
	}
	if (sum/2 == b){
		printf ( "Bon Appetit\n" );
	}
	else
		printf ( "%d\n",b-(sum/2) );
}	

int main(){
	int bill[4] = {3,10,2,9};
	bonAppetit(4,bill,1,7);
	return 0;
}

