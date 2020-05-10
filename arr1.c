/*
 * =====================================================================================
 *
 *       Filename:  arr1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Friday 13 December 2019 03:38:14  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main() {
	int arr[5];
	int temp;
	for(int i = 1;i<=5;i++){
		scanf("%d",&temp);
		arr[i] = temp;
	}	
	for(int i=1;i<=5;i++){
		printf("%d",arr[i]);
	}
	return 0;

}
