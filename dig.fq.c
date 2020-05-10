/*
 * =====================================================================================
 *
 *       Filename:  dig.fq.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Thursday 19 December 2019 12:25:23  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  ABINASH DASH (), abinashdash17@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LENGTH 10
int main(){
	char *str = (char *) malloc(MAX_LENGTH * sizeof(char));
	char ch;
	fgets(str,MAX_LENGTH,stdin);
	int len = strlen(str),fq[10];
	for ( int i = 0; i < 10; i += 1 ) {
		fq[i] = 0;
	}

	for ( int i = 0; i < len; i += 1 ) {
		ch = str[i];
		if (ch>=48 && ch<=57)
			fq[ch-48]++;
	}
	
	for ( int i = 0; i < 10; i += 1 ) {
		printf ( "%d ",fq[i] );
	}
	return 0;
}
