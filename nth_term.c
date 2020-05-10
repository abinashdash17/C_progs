/*
 * =====================================================================================
 *
 *       Filename:  nth_term.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Wednesday 18 December 2019 01:54:51  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  ABINASH DASH (), abinashdash17@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
int find_nth(int n,int a,int b,int c){
	int sum = a+b+c;
	if (n>4)
		return find_nth(n-1,b,c,sum);
	else 
		return sum;
}
int main() {
	int n,a,b,c;
	scanf ( "%d", &n );
	scanf ("%d %d %d",&a,&b,&c);
	int ans = find_nth(n,a,b,c);
	printf ( "%d",ans );
	return 0;
}
