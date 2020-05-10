/*
 * =====================================================================================
 *
 *       Filename:  ch_str_sen.c
 *
 *    Description:  hack2
 *
 *        Version:  1.0
 *        Created:  Tuesday 10 December 2019 12:05:16  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<string.h>

int main(){
	char ch;
	char str[32];
	char sen[32];
	scanf("%c",&ch);
	scanf("%s",str);
	scanf("\n");
	scanf("%[^\n]%*c",sen);
	printf("%c\n",ch);
	printf("%s\n",str);
	printf("%s",sen);
	return 0;
}
