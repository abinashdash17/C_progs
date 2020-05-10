/*
 * =====================================================================================
 *
 *       Filename:  str_fn_test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Thursday 16 April 2020 10:15:58  IST
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
#include <string.h>
int main(){
	char *str[7] = {"ab","ab","ac","ad","ae","ae","af"};	
	int upr[7];
	int ind = 0;
	upr[0] = 0;
	for(int i = 1 ; i<7;i++){
		upr[i] = (strcmp(str[i],str[i-1]) == 0) ? ind : ++ind;
	}
	for ( int i = 0; i < 7; i += 1 ) {
		printf ( "%s ",str[i] );
		printf ( "%d ",upr[i] );
		printf ( "\n" );
	}
	return 0;
}
