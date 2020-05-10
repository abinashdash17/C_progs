/*
 * =====================================================================================
 *
 *       Filename:  excel_lim_print.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Sunday 29 March 2020 12:07:17  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  ABINASH DASH (), abinashdash17@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>
void num_to_digs(int x,int l,int k,char* digs){
	for(int i = 0;i<k;i+=1){
		digs[i]='A';
	}
}
int main(){
	printf ( " enter a num :\n" );
        int x;
	scanf("%d",&x);
	int l= 0,u=4,k=1;
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
			u = u + pow(4,k);
			printf("%d %d",l,u);
			printf ( "\n" );
		}
	}
	printf ( "%d = ",x );
	for ( int i = 0; i < k; i += 1 ) {
		printf ( "%c",digs[i] );
	}
	printf ( "\n" );
	return 0;
}
