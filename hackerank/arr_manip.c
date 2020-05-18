/*
 * =====================================================================================
 *
 *       Filename:  arr_manip.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Tuesday 19 May 2020 02:00:45  IST
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

long arrayManipulation(int n, int queries_rows, int queries_columns, int** queries) {
        long* arr = (long *) calloc(n,sizeof(*arr));
         
        for ( int i = 0; i < queries_rows; i += 1 ) {
                for ( int k = queries[i][0]-1; k < queries[i][1]; k += 1 ) {
                        arr[k]+=queries[i][2];
                }
        }
        long max = arr[0];
         
        for ( int i = 1; i < n; i += 1 ) {
                max = arr[i]>max ? arr[i] : max;
        }
        return max;

}

int main(){
	int queries_rows = 3;
	int queries_columns = 3;
	int** queries = (int**) malloc(queries_rows*sizeof(*queries));
	for (int i=0 ; i < queries_columns; i++){
		queries[i] = (int*) malloc(queries_columns*sizeof(int));
	}
	int arr[] = {1,2,100,2,5,100,3,4,100};
	int ind = 0;

	for ( int i = 0; i < queries_rows; i += 1 ) {
		for ( int j = 0; j < queries_columns; j += 1 ) {
			queries[i][j] = arr[ind++];
		}
	}
	printf ( "%ld\n",arrayManipulation(5,3,3,queries ));
	return 0;
}

