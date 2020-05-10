/*
 * =====================================================================================
 *
 *       Filename:  pointers.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Thursday 12 December 2019 12:21:41  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
void update(int *pa,int *pb){
	int a,b;
	a = *pa;
	b = *pb;
	*pa = a+b;
	if (a<b)
		*pb = b-a;
	else
		*pb = a-b;
}
int main(){
	int a,b;
	int *pa=&a,*pb=&b;
	scanf("%d %d",pa,pb);
	update(pa,pb);
	printf("%d\n%d",a,b);
	return 0;
}
