/*
 * =====================================================================================
 *
 *       Filename:  hrank_sum_div_k.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Tuesday 21 April 2020 02:09:12  IST
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

int divisibleSumPairs(int n, int k, int ar_count, int* ar) {
	int count=0;

	for ( int i = 0; i < n-1; i += 1 ) {
		for ( int j = i+1; j < n; j += 1 ) {
			if ((ar[i] + ar[j]) % k == 0)
				count++;
		}
	}
	return count;
}

int main(){
	int arr[] = {1,3,2,6,1,2};
	printf ( "%d\n",divisibleSumPairs(6,3,6,arr ));
	return 0;
}

