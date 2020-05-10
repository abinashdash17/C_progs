/*
 * =====================================================================================
 *
 *       Filename:  hrank_bday_candle.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Thursday 16 April 2020 12:57:13  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
int birthdayCakeCandles(int ar_count, int* ar) {
	int big = ar[0],bigc=0;
	
	for ( int i = 1; i < ar_count; i += 1 ) {
		big = ar[i] > big ? ar[i] : big;
	}

	for ( int i = 0; i < ar_count; i += 1 ) {
		bigc = ar[i] == big ? bigc+1 : bigc;
	}
	return bigc;

}
int main(){
	int ar[6] = {4,334,4,2,3};
	int count = birthdayCakeCandles(6,ar);
	printf ( "%d\n",count );
	return 0;
}
