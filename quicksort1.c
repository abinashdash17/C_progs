/*
 * =====================================================================================
 *
 *       Filename:  quicksort.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Tuesday 31 March 2020 11:27:38  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  ABINASH DASH (), abinashdash17@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdbool.h>
void swap(int* ptr1,int *ptr2){
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
void qs(int* arr,int start,int len){
	if(len>1){
		bool complete = false;
		int piv = start;
		int i = start+len-1;
		int dirn = -1;
		while (complete == false){
			if ( dirn == -1){
				if (arr[i] < arr[piv]){
					swap(&arr[i],&arr[piv]);
					piv = i;
					dirn = 1;
					i = start;
				}
				else {
					i = i-1;
					if( i == piv)
						complete = true;
				}
			}
			else {
				if (arr[i] > arr[piv]){
					swap(&arr[i],&arr[piv]);
					piv = i;
					dirn = -1;
					i = start+len-1;
				}
				else {
					i = i+1;
					if( i == piv)
						complete = true;
				}
			}
		}
		qs(arr,piv+1,len-(piv+1));
		qs(arr,start,piv-start);
	}
}
int main(){
	int arr[]={5,5,2,3,9,7,8,9,1,4,0,0,6};
	int start = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	qs(arr,start,len);
	for ( int i = 0; i < len; i += 1 ) {
		printf("%d ",arr[i]);
	}
	printf ( "\n" );
	return 0;
}
