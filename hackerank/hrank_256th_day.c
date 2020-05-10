/*
 * =====================================================================================
 *
 *       Filename:  hrank_256th_day.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Tuesday 21 April 2020 01:30:32  IST
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

char* dayOfProgrammer(int year) {
	static char str[11];
	if (year == 1918){
		sprintf(str,"26.09.1918");
	}
	else if (year < 1918){
		if (year% 4== 0)
			sprintf(str,"12.09.%d",year);
		else
			sprintf(str,"13.09.%d",year);
	}
	else{
		if ((year%400 == 0) || (year%4== 0 && year%100 !=0))
			sprintf(str,"12.09.%d",year);
		else
			sprintf(str,"13.09.%d",year);

	}
	return str;
}

int main(){
	printf("%s",dayOfProgrammer(1917));
	return 0;
}

