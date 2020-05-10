/*
 * =====================================================================================
 *
 *       Filename:  struc_tutorial.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Thursday 12 December 2019 12:47:09  IST
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
struct dog{
	int height;
	char name[20];
}d1;

int main(){
	struct dog d2={1,"kalu"};
	d1.height = 2;
	d1.name = "bhura";	
	printf("%s %d",d1.name,d1.height);
	printf("%s %d",d2.name,d2.height);
	return 0;
}
