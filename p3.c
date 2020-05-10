/*
 * =====================================================================================
 *
 *       Filename:  p3.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Saturday 09 May 2020 09:55:14  IST
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

	

int main(){
	unsigned int a = -1;
	int b = ~0;
	if (a == b){
		printf ( "%d %d same\n",a,b );
	}
	else{
		printf ( "not same \n" );
	}
	return 0;
}

