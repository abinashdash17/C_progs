/*
 * =====================================================================================
 *
 *       Filename:  str2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Monday 16 December 2019 01:15:04  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  ABINASH DASH (), abinashdash17@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main() {
	int a,b;
	scanf ( "%d\n%d", &a,&b );
	char num[][10]= {"one","two","three","four","five","six","seven","eight","nine","even","odd"};
	
	for ( int i = a-1; i < b; i += 1 ) {
		if(i<9)
			printf ( "%s\n",num[i] );
		else if (i%2==0)
			printf ( "%s\n",num[10] );
		else
			printf ( "%s\n",num[9]);

	}
	return 0;
}
