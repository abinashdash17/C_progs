/*
 * =====================================================================================
 *
 *       Filename:  quicksort2.c
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
		int ri = start+len-1,li;
		int dirn = -1;
		while (complete == false){
			if ( dirn == -1){
				if (arr[ri] < arr[piv]){
					swap(&arr[ri],&arr[piv]);
					li = piv;
					piv = ri;
					dirn = 1;
				}
				else {
					ri = ri-1;
					if( ri == piv)
						complete = true;
				}
			}
			else {
				if (arr[li] > arr[piv]){
					swap(&arr[li],&arr[piv]);
					ri = piv;
					piv = li;
					dirn = -1;
				}
				else {
					li = li+1;
					if( li == piv)
						complete = true;
				}
			}
		}
		qs(arr,piv+1,len-(piv+1));
		qs(arr,start,piv-start);
	}
}
int main(){
	int arr[]={100,1,99,102,2,1,3,55,75,45};
	int start = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	qs(arr,start,len);
	for ( int i = 0; i < len; i += 1 ) {
		printf("%d ",arr[i]);
	}
	printf ( "\n" );
	return 0;
}
