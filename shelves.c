/*
 * =====================================================================================
 *
 *       Filename:  test1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Monday 23 December 2019 10:53:11  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  ABINASH DASH (), abinashdash17@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(){
	int no_of_que,no_of_shlv,a,x,y;
	scanf ( "%d", &no_of_shlv );
	int *ptr[no_of_shlv];
	int ind[no_of_shlv],max_size[no_of_shlv];

	for ( int i = 0; i < no_of_shlv; i += 1 ) {
		ind[i]=-1;
		max_size[i]=5;
		ptr[i] = (int *) malloc(max_size[i]*sizeof(int));
	}
	scanf ( "%d", &no_of_que );
	for ( int i = 0; i < no_of_que; i += 1 ) {
		scanf("%d ",&a);
		if (a==1 || a==2)
			scanf("%d %d",&x,&y);
		else
			scanf("%d",&x);
		switch(a){
			case 1:
				if (ind[x]+1 >= max_size[x]){
					max_size[x] = max_size[x]+5;
					ptr[x] = realloc(ptr[x],max_size[x]*sizeof(int));
					ind[x]++;
				}
				else 
					ind[x]++;
				ptr[x][ind[x]]=y;
				break;
			case 2:
				if (y<=ind[x])
				printf("%d\n",ptr[x][y]);
				else
					printf ( "index doesn't exist.\n" );
				break;
			case 3:
				printf ( "%d\n",ind[x]+1 );
				break;

		}
	}
	return 0;
}
