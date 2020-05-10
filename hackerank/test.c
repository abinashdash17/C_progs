/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Thursday 30 April 2020 02:19:59  IST
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

size_t printSizeStr(const char *s){
	return (sizeof(s)/sizeof(s[0]))-1;
}
size_t printSizeArr(int *a){
	return (sizeof(a)/sizeof(a[0]))-1;
}

int main(){
	char str[]="hello world";
	int  arr[] = {1,2,3,4,5,6};
	printf ( "%zu\n",sizeof(str)/sizeof(str[0]) - 1 );
	printf ( "%zu\n",printSizeStr(str) );
	printf ( "%zu\n",sizeof(arr)/sizeof(arr[0]) );
	printf ( "%zu\n",printSizeArr(arr) );
	return 0;
}

