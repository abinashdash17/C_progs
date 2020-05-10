/*
 * =====================================================================================
 *
 *       Filename:  clouds.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Thursday 30 April 2020 01:04:14  IST
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

int jumpingOnClouds(int c_count, int* c) {
	int ind = 0,steps=0;
	while(ind<c_count-1){
		if(c[ind+2] !=1 ){
			ind+=2;
			steps++;
		}
		else{
			ind+=1;
			steps++;
		}
	}
	return steps;
}

int main(){
	int arr[] = {0,0,0,1,0,0};
	printf ( "%d\n",jumpingOnClouds(6,arr) );
	return 0;
}

