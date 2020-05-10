/*
 * =====================================================================================
 *
 *       Filename:  p2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Saturday 09 May 2020 09:47:11  IST
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
	char ch1 = 125,ch2 = 10;
	ch1 = ch1+ch2;
	char ch3 = ch1-ch2-4;
	int ch4 = ch1-ch2-4;
	printf ( "%d\n",ch1 );
	printf ( "%d %d %d\n",ch1-ch2-4,ch3,ch4 );
	return 0;
}
