/*
 * =====================================================================================
 *
 *       Filename:  sort.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Saturday 28 December 2019 01:37:43  IST
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
	int n = 5;
	int arr[n],ind[n];
	
	for ( int i = 0; i < n; i += 1 ) {
		scanf ( "%d", &arr[i] );
		ind[i] = i;
	}

	for ( int i = n-2; i >= 0; i -= 1 ) {
		for ( int j = 0; j <= i; j += 1 ) {
			if(arr[j] < arr[j+1]){
				arr[j] = arr[j]+arr[j+1];
				arr[j+1] = arr[j] - arr[j+1];
				arr[j] = arr[j] - arr[j+1];
				ind[j] = ind[j]+ind[j+1];
				ind[j+1] = ind[j] - ind[j+1];
				ind[j] = ind[j] - ind[j+1];
			}	
		}
	}

	for ( int i = 0; i < 5; i += 1 ) {
		printf ( "%d ", arr[i] );
	}
	printf ( "\n" );
	for ( int i = 0; i < 5; i += 1 ) {
		printf ( "%d ", ind[i] );
	}
	printf ( "\n" );
	return 0 ;
}
