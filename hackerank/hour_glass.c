/*
 * =====================================================================================
 *
 *       Filename:  hour_glass.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Friday 01 May 2020 02:28:22  IST
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

int hourglassSum(int arr_rows, int arr_columns, int** arr) {
	int max=0;
	int sum=0;

	for ( int i = 1; i < 5; i += 1 ) {
		for ( int j = 1; j < 5; j += 1 ) {
			if (i == 1 && j == 1){
				for ( int k = -1; k < 2; k += 1 ) {
					for ( int l = -1; l < 2; l += 1 ) {
						max+=arr[i+k][j+l];
					}
				}
				max -= (arr[i][j-1]+arr[i][j+1]);
			}
			else{
				sum = 0;
				for ( int k = -1; k < 2; k += 1 ) {
					for ( int l = -1; l < 2; l += 1 ) {
						sum+=arr[i+k][j+l];
					}
				}
				sum -= (arr[i][j-1]+arr[i][j+1]);
				max = sum > max ? sum:max;

			}
		}
	}
 	return max;

}

int main(){
	int arr[6][6] = { {1,1,1,0,0,0},
		{0,1,0,0,0,0},
		{1,1,1,0,0,0},
		{0,0,2,4,4,0},
		{0,0,0,2,0,0},
		{0,0,1,2,4,0}};
	int **x;
	x = malloc(6 * sizeof *x);
  	for (int i=0; i<6; i++)
  	{
    		x[i] = malloc(6 * sizeof(*x[i]));
  	}

	for ( int i = 0; i < 6; i += 1 ) {
		for ( int j = 0; j < 6; j += 1 ) {
			x[i][j] = arr[i][j];
	//		printf ( "%d ",x[i][j] );
		}
	//	printf ( "\n" );
	}

	printf ( "%d \n",hourglassSum(6,6,x) );
	return 0;
}

