/*
 * =====================================================================================
 *
 *       Filename:  chaos.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Sunday 17 May 2020 12:05:08  IST
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
#include <stdbool.h>
void minimumBribes(int q_count, int* q) {
	int sum = 0;
	bool isChaotic = false;
	
	for ( int i = 0; i < q_count; i += 1 ) {
		int temp = q[i]-1-i;
		if(temp>2){
			isChaotic = true;
			break;
		}
		else if(temp>=0){
			sum+=temp;
		}
	}
	if(isChaotic)
		printf ( "Too chaotic\n" );
	else
		printf ( "%d\n",sum );


}

int main(){
	int a[] = {2,5,1,3,4};
	minimumBribes(sizeof(a)/sizeof(a[0]),a);
	return 0;
}

