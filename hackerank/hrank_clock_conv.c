/*
 * =====================================================================================
 *
 *       Filename:  hrank_clock_conv.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Thursday 16 April 2020 01:34:21  IST
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
char* timeConversion(char* s) {
    /*
     * Write your code here.
     */
	char* cl_24 = (char*) malloc(9*sizeof(char));
	char temp[2];
	int h,offset;
	for(int i=0;i<2;i++){
		temp[i] = s[i];	
		h = atoi(temp);
	}
	temp[0] = s[8];
	if (h!=12){
		offset = temp[0] == 'P' ? 12 : 0;
	}
	if (h == 12){
		 offset = (temp[0] == 'P') ? 0 : -12;
	}
	char res[2];
	if(h+offset>=10)
		sprintf(res,"%d",h+offset);
	else{
		res[0] = '0';
		res[1] = h+offset + '0';
	}
	for ( int i = 0; i < 2; i += 1 ) {
		cl_24[i] = res[i];
	}
	for ( int i = 2; i < 8; i += 1 ) {
		cl_24[i] = s[i];
	}
	cl_24[8] = '\0';
	return cl_24;
}

int main(){
	char str[11] = "07:05:45PM";
/* 	printf ( "%d\n",'<' );
 */	char* res = (char*) malloc(9*sizeof(char));
	res = timeConversion(str);
	printf ( "%s\n",res );
	return 0;
}
