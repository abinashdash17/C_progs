/*
 * =====================================================================================
 *
 *       Filename:  temp_for_hackerrank.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Wednesday 15 April 2020 01:33:18  IST
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

/* int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int pd = 0, sd = 0;
    for (int i = 0;i<arr_rows;i++){
	    pd+=arr[i][i];
	    sd+=arr[i][arr_rows-i];
    }
    return abs(pd-sd);

} */
void plusMinus(int arr_count, int* arr){
        int pos=0,neg = 0,z = 0;
        float tot = arr_count;
        for ( int i = 0; i < arr_count; i += 1 ) {
                if(arr[i] == 0)
                        z++;
                else if(arr[i] > 0)
                        pos++;
                else
                        neg++;
        }
	float pf = (float) pos/tot;
	float nf = (float) neg/tot;
	float zf = (float) z/tot;
        printf ( "%f\n%f\n%f",pf,nf,zf );

}

int main(){
	int arr_count = 6;
	int arr[6] = {-4,3,-9,0,4,1};
	plusMinus(arr_count,arr);
	return 0;
}
