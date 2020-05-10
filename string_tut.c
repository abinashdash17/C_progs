/*
 * =====================================================================================
 *
 *       Filename:  string_tut.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Thursday 12 December 2019 01:06:58  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int main(){
	char str1[20],str2[20];
	scanf("%s\n",str1);
	fgets(str2,20,stdin);
	printf("%s %s",str1,str2);
	return 0;
}
