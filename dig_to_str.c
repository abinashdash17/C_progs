/*
 * =====================================================================================
 *
 *       Filename:  dig_to_str.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Thursday 16 April 2020 09:37:52  IST
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
	char str[10]= "\0";
	int upr[1] = {3};
	int pr[3] = {0,1,2};
	int lpr = 3;
	for (int i = 0;i<lpr;i++){
		sprintf(str,"%s%d",str,pr[i]);
	}
	sprintf(str,"%s%d",str,upr[0]);
	int num = atoi(str);
	printf ( "%s\n",str );
	printf ( "%0d\n",num );
	return 0;
}
