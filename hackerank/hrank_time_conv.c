/*
 * =====================================================================================
 *
 *       Filename:  hrank_time_conv.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Sunday 19 April 2020 10:12:15  IST
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

char* timeConversion(char* s) {
	char* cl_24 = (char*) malloc(9*sizeof(char));
	int h,m,sec;
	char half[3];
	sscanf(s,"%d:%d:%d%s",&h,&m,&sec,half);
	if(h==12){
		h = half[0]=='P' ? 12 :0;
	}
	else{
		h = half[0] == 'P' ? h+12 : h;
	}
	sprintf(cl_24,"%02d:%d:%d",h,m,sec);
	return cl_24;
}

int main(){
	char str[] = "07:20:49PM";
	printf ( "%s\n",timeConversion(str) );
	return 0;
}

