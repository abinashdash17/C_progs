/*
 * =====================================================================================
 *
 *       Filename:  excel.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/28/20 11:59:42
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>
void num_to_digs(int x,int l,int k,char* digs){
	char offset='A';
	for(int i= 0;i < k;i++)
		digs[i] = 'A';
	int y = x - l,m;
	int exp = k-1;
	while(y!=0){
		m = y%26;
		y = y - m;
		y = y / 26;
		digs[exp] = m + offset;
		exp--;
	}

	digs[k]= '\0';
}
int main(){
	printf ( " enter a num :\n" );
        int x,y;
	scanf("%d",&y);
	x = y-1;
	int l= 0,u=26,k=1;
	char digs[5];
	while(1){
		if (x>=l && x<u){
			for (int i = 0;i<k;i++)
				digs[i] = 'A';
			num_to_digs(x,l,k,digs);
			break;
		}
		else {
			k++;
			l = u;
			u = u + pow(26,k);
//			printf("%d %d",l,u);
		}
	}
	printf ( "%d = ",y );
	for ( int i = 0; i < k; i += 1 ) {
		printf ( "%c",digs[i] );
	}
	printf ( "\n" );
	return 0;
}
