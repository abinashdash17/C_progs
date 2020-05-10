/*
 * =====================================================================================
 *
 *       Filename:  hrank_minmax.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Wednesday 15 April 2020 02:19:46  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include<stdio.h>

void miniMaxSum(int arr_count,int* arr){
	int sorted[5];

	for ( int i = 0; i < 5; i += 1 ) {
		sorted[i] = arr[i];
	}
	for (int i = 0;i<5-1;i++){
		int ind = i;

		for ( int j = i+1; j < 5; j += 1 ) {
			ind = sorted[j]<sorted[ind]?j:ind;
		}
		int temp2 = sorted[ind]; 
		sorted[ind] = sorted[i];
		sorted[i] = temp2;
	}
	int min = 0, max = 0;
	for ( int i = 0; i < 4; i += 1 ) {
		min+=sorted[i];
	}
	for ( int i = 1; i < 5; i += 1 ) {
		max+=sorted[i];
	}
	printf ( "%d %d",min,max );
}

int main(){
	int arr[5] = {1,2,3,4,5};
	miniMaxSum(5,arr);
	return 0;

}
