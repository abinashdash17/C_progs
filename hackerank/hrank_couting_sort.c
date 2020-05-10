/*
 * =====================================================================================
 *
 *       Filename:  hrank_couting_sort.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Sunday 19 April 2020 10:58:34  IST
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

int* countingSort(int arr_count, int* arr, int* result_count) {
	int min,max;
	min = max = arr[0];
	
	for ( int i = 1; i < arr_count; i += 1 ) {
		min = arr[i] < min ? arr[i] : min;
		max = arr[i] > max ? arr[i] : max;
	}
	int *counter = (int *) calloc((max-min+1),sizeof(int));
	int *sorted = (int *) malloc(arr_count*sizeof(int));

	for ( int i = 0; i < arr_count; i += 1 ) {
		counter[arr[i]-min]++;
	}
	int ind = 0;
	for ( int i = 0; i < max-min+1; i += 1 ) {

		for ( int j = 0; j < counter[i]; j += 1 ) {
			sorted[ind++] = i+min;
		}
	}
	free(counter);
	*result_count = arr_count;
	return sorted;
}

int main(){
	int arr[]={5,5,5,6,5,5,7,8,8,4,4,3,3,10,11,10};
	int n = (sizeof(arr)/sizeof(arr[0]));
	int *sorted = (int *) malloc(n*sizeof(int));
	int result_count = 0;
	sorted = countingSort(n,arr,&result_count);

	for ( int i = 0; i < result_count; i += 1 ) {
		printf ( "%d ",arr[i] );
	}
	printf ( "\n" );
	for ( int i = 0; i < result_count; i += 1 ) {
		printf ( "%d ",sorted[i] );
	}
	printf ( "\n" );
	return 0;
}

