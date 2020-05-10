/*
 * =====================================================================================
 *
 *       Filename:  hrank_socks.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Wednesday 22 April 2020 08:41:31  IST
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

int sockMerchant(int n, int ar_count, int* ar) {
	int* set = (int *) malloc(ar_count*sizeof(int));
	int* count = (int *) calloc(ar_count,sizeof(int));
	char test='n';
	int counter = 1;
	set[0] = ar[0];
	count[0] = 1;

	for ( int i = 1; i < ar_count; i += 1 ) {
		test = 'n';

		for ( int j = 0; j < counter; j += 1 ) {
			if (ar[i] == set[j]){
				count[j]++;
				test = 'y';
				break;
			}
		}
		if (test == 'n'){
			set[counter] = ar[i];
			count[counter++]++;
		}
	}
	int sum = 0;

	for ( int i = 0; i < counter; i += 1 ) {
		sum+=count[i]/2;
	}
	return sum;
}


int main(){
	int ar[] = {10,20,20,10,10,30,50,10,20};
	printf ( "%d\n",sockMerchant(9,9,ar) );
	return 0;
}

