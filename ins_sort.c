/*
 * =====================================================================================
 *
 *       Filename:  ins_sort.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Sunday 22 March 2020 01:07:06  IST
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
	int arr[] = {6,4,5,3,2,1,2,3,4};
	int SIZE = sizeof(arr) / sizeof(arr[0]);
	int temp;
	for ( int i = 1; i < SIZE; i += 1 ) {
		temp = arr[i];
		for ( int j = 0; j < i; j += 1 ) {
			if ( arr[j] > arr[i] ) {
				for ( int k = i-1; k > j-1; k += -1 ) {
					arr[k+1] = arr[k];
				}
				arr[j] = temp;
			}
		}
	}

	for ( int i = 0; i < SIZE; i += 1 ) {
		printf ( "%d",arr[i] );
	}
	printf ( "\n" );
	return 0;
}
