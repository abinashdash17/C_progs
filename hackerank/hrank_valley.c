/*
 * =====================================================================================
 *
 *       Filename:  hrank_valley.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Thursday 23 April 2020 01:01:33  IST
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

int countingValleys(int n, char* s) {
	int height = 0,vcount=0,prev_height;
	for ( int i = 0; i < n; i += 1 ) {
		prev_height = height;
		height = s[i] == 'D' ? height-1 : height+1;
		if (prev_height == -1 && height == 0)
			vcount++;
	}
	return vcount;
}

int main(){
	char str[] = "UDDDUDUU";
	printf ( "%d\n",countingValleys(9,str) );

	return 0;
}

