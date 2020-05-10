/*
 * =====================================================================================
 *
 *       Filename:  hrank_book_pages.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Wednesday 22 April 2020 09:27:33  IST
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

int pageCount(int n, int p) {
	int p2,n2;;
	int res1,res2;
	if (p==1 || p==n){
		return 0;
	}
	else {

		if (n%2==0)
			n2 = n+1;
		else
			n2 = n;
		if (p%2==0)
			p2 = p+1;
		else
			p2 = p;
		res1 = (p2-1)/2;
		res2 = (n2-p2)/2;
	}
	if (res1<res2)
		return res1;
	else
		return res2;

}

int main(){
	printf ( "%d\n",pageCount(83246,78132) );
	return 0;
}

