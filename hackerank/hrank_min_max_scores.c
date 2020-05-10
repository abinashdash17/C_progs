/*
 * =====================================================================================
 *
 *       Filename:  hrank_min_max_scores.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Monday 20 April 2020 12:08:35  IST
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

int* breakingRecords(int scores_count, int* scores, int* result_count) {
	int min,max = scores[0];
	min = max;
	int max_count=0,min_count=0;
	int* res = (int*) malloc(2*sizeof(int));
	for ( int i = 0 ; i < scores_count; i += 1 ) {
		if (scores[i] > max){
			max = scores[i];
			max_count++;
		}
		if (scores[i] < min){
			min = scores[i];
			min_count++;
		}

	}
	res[0] = max_count;
	res[1] = min_count;
	*result_count = 2;
	return res;
}

int main(){
	int scores[] = {10,5,20,20,4,5,2,25,1};
	//int res[2];
	int result_count = 0;
	int *res = breakingRecords(9,scores,&result_count);
	
	for ( int i = 0; i < result_count; i += 1 ) {
		printf ( "%d ",res[i] );
	}
	return 0;
}

