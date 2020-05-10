/*
 * =====================================================================================
 *
 *       Filename:  bogus.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Monday 13 April 2020 10:44:51  IST
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
int main(){
	int i,sum;
	sum = 0;

	for ( i = 0; i  -= 1000; i += 1 ) {

		sum += i;
	}
	printf("%d\n",sum);
	return 0;
}
