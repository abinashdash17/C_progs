/*
 * =====================================================================================
 *
 *       Filename:  array_of_str_pass.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Thursday 16 April 2020 12:30:13  IST
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
void print_arr_of_str(char **argv,int argc){
	
	for ( int i = 0; i < argc; i += 1 ) {
		printf ( "%s\n",argv[i] );
	}
}
int main(){
	char *argv[5]={"ab","ac","ad","af","ag"};
	print_arr_of_str(argv,5);
	return 0;
}
