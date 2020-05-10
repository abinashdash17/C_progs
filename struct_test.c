/*
 * =====================================================================================
 *
 *       Filename:  struct_test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Saturday 04 April 2020 08:11:45  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
struct BOOK{
	char name[30];
	unsigned int pages;	
};
typedef struct BOOK book;
int main(){
	char temp[30]="Indomitable Spirit";
	book b1;
	strcpy(b1.name,temp);
	b1.pages = 150;
	printf ( "%s has %d pages\n",b1.name,b1.pages );
	return 0;
}
