/*
 * =====================================================================================
 *
 *       Filename:  hrank_kangaroo.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Saturday 18 April 2020 12:01:41  IST
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
char* kangaroo(int x1, int v1, int x2, int v2) {
	static char str[] = "YES";
	if (v1<v2){
		strcpy(str,"NO");
	}
	else{
		if ((x2-x1)%(v1-v2) == 0)
			strcpy(str,"YES");
		else
			strcpy(str,"NO");
	}
	return str;
}
int main(){
	char str1[]="43 2 70 2";
//	char str2[] = "YES";
	int x1,v1,x2,v2;
	sscanf(str1,"%d %d %d %d",&x1,&v1,&x2,&v2);
	printf ( "%s\n",kangaroo(x1,v1,x2,v2) );
	return 0;
}
