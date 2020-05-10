/*
 * =====================================================================================
 *
 *       Filename:  arr_of_ptr.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Thursday 19 December 2019 06:28:15  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  ABINASH DASH (), abinashdash17@gmail.com
 *   Organization:  
 *
 * =====================================================================================
*/

#include <stdio.h>
int main(int argc,char **argv){
	for ( int i = 0; i < argc; i += 1 ) {
		printf ( "%s\n",*(argv+i) );
	}
	return 0;
}
