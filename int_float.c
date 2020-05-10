/*
 * =====================================================================================
 *
 *       Filename:  int_float.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Tuesday 10 December 2019 12:25:14  IST
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
	int a,b,sumd,diffd;
	float c,d,sumf,difff;
	scanf("%d %d",&a,&b);
	scanf("%f %f",&c,&d);
	sumd = a+b;
	diffd = a-b;
	sumf = c+d;
	difff = c-d;
	printf("%d %d\n",sumd,diffd);
	printf("%.1f %.1f",sumf,difff);
	return 0;
}
