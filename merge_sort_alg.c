/*
 * =====================================================================================
 *
 *       Filename:  merge_sort_alg.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Friday 03 April 2020 01:02:34  IST
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
int a=0;
void mergesort(int *,int,int);
void merge(int *,int, int, int);
int main(){
	int n;
	printf ( "enter a no . \n" );
	scanf ( "%d", &n );
	int arr[n];
	for ( int i = n-1; i >= 0; i += -1 ) {
		arr[i] = n-1-i;
	}
	for ( int i = 0; i < n; i += 1 ) {
		printf("%d ",arr[i]);
	}
	printf ( "\n" );
	int l = sizeof(arr) / sizeof(arr[0]);
	mergesort(arr,0,l-1);
	
	for ( int i = 0; i < l; i += 1 ) {
		printf("%d ",arr[i]);
	}
	printf ( "\n %d \n",a );
	return 0;
}

void mergesort(int* arr,int l, int r){
	a++;
	if(r>l){
		int m = (l+r)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}
void merge(int* arr,int l, int m, int r){
	int li = l, ri = m+1, i = 0, arr2[r-l+1];
	while(li<=m && ri <= r){
		if(arr[ri] < arr[li]){
			arr2[i] = arr[ri];
			ri++;
			i++;
		}
		else {
			arr2[i] = arr[li];
			li++;
			i++;
		}
	}
	if (li > m) {
		while(i<r-l+1){
			arr2[i] = arr[ri];
			ri++;
			i++;
		}
	}
	if (ri > m){
		while(i<r-l+1){
			arr2[i] = arr[li];
			li++;
			i++;
		}
	}

	for ( i = 0; i < r-l+1; i += 1 ) {
		arr[l+i] = arr2[i];
	}
}
