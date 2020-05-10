/*
 * =====================================================================================
 *
 *       Filename:  extract_char.c
 *
 *    Description: 
 *
 *
 *        Version:  1.0
 *        Created:  03/28/20 15:38:14
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	printf ( " enter a num :\n" );
        int x;
	scanf("%d",&x);
	int l= 20,k=3;
        char dig[5],offset='A';
	for(int i= 0;i < k;i++)
		dig[i] = 'A';
	int y = x - l,m;
	int exp = k-1;
	while(y!=0){
		m = y%4;
		y = y - m;
		y = y / 4;
		dig[exp] = m + offset;
		exp--;
	}

	dig[k]= '\0';
	printf ( "%s\n",dig );
	printf ( "\n" );
	return 0;
        
}
