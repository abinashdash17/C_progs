/*
 * =====================================================================================
 *
 *       Filename:  first_non_rep_char.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Wednesday 06 May 2020 06:02:12  IST
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
char first_non(char *str){
	int ind,len = strlen(str);
	char res = '_';
	int counter[26];
	for ( int i = 0; i < len; i += 1 ) {
		counter[i] = 0;
	}
	for ( int i = 0; i < len; i += 1 ) {
		ind = str[i] - 'a';
		counter[ind]++;
	}
	for ( int i = 0; i < len; i += 1 ) {
		ind = str[i] - 'a';
		if (counter[ind] == 1){
			res = str[i];
			break;
		}
	}
	return res;
}

int main(){
	char str[] = "aabaccdbbcder";
	printf ( "%c\n",first_non(str));
	return 0;
}
