/*
 * =====================================================================================
 *
 *       Filename:  hrank_mig_bird.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Wednesday 22 April 2020 10:33:44  IST
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

int migratoryBirds(int arr_count, int* arr) {
	int counter[]={0,0,0,0,0};
	
	for ( int i = 0; i < arr_count; i += 1 ) {
		counter[arr[i]-1]++;
	}
	int max = arr[0];
	for ( int i = 1; i < 5; i += 1 ) {
		max = counter[i] > max ? counter[i] : max;
	}

	int ind ;
	for ( int i = 0; i < 5; i += 1 ) {
		if(counter[i] == max){
			ind = i;
			break;
		}
	}
	return ind+1;

}

int main(){
	int arr[] = {1,2,3,4,5,4,3,2,1,3,4};
	printf ( "%d\n",migratoryBirds(sizeof(arr)/sizeof(arr[0]),arr) );
	return 0;
}

