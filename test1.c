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
	int no_of_que,a,b,max_size=5,ind=-1;
	scanf ( "%d", &no_of_que );
	int *ptr = (int *) malloc(max_size*sizeof(int));
	for ( int i = 0; i < no_of_que; i += 1 ) {
		scanf("%d %d",&a,&b);
		switch(a){
			case 0:
				if (ind+1 >= max_size){
					max_size = max_size+5;
					ptr = realloc(ptr,max_size*sizeof(int));
					ind++;
				}
				else 
					ind++;
				ptr[ind]=b;
				break;
			case 1:
				if (b<=ind){
				for(int j=0;j<ind+1;j ++)
				printf("%d ",ptr[j]);
				}
				else
					printf ( "index doesn't exist.\n" );
				break;
			default:
				printf ( "enter a correct choice no.\n" );
				break;

		}
	}
	return 0;
}
