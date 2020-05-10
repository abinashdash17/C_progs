/*
 * =====================================================================================
 *
 *       Filename:  all_perm_of_num1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Wednesday 15 April 2020 10:04:56  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
void perm(int* pr,int lpr,int* upr,int lupr,char** argv){
	if(lupr == 2){
		for ( int i = 0; i < lpr; i += 1 ) {
			printf ( "%s ",argv[pr[i]] );
		}
		printf ( "%s %s\n",argv[upr[0]],argv[upr[1]] );
		for ( int i = 0; i < lpr; i += 1 ) {
			printf ( "%s ",argv[pr[i]] );
		}
		printf ( "%s %s\n",argv[upr[1]],argv[upr[0]] );
	}
	else{
		int subarr[lupr-1],ind;
		for ( int i = 0; i < lupr; i += 1 ) {
			pr[lpr] = upr[i];
			ind = 0;

			for ( int j = 0; j < lupr; j += 1 ) {
				if(j!=i)
					subarr[ind++] = upr[j];
			}
			perm(pr,lpr+1,subarr,lupr-1,argv);
		}
	}
}
int main(){
	char *str[4] = {"ab","ac","ad","ae"};	
	int n = sizeof(str)/sizeof(str[0]);
	printf ( "%d\n",n );
 	int *pr = (int*) malloc((n-2)*sizeof(int));
	int *upr = (int*) malloc(n*sizeof(int));
	
	for ( int i = 0; i < n; i += 1 ) {
		upr[i] = i;
	}
	perm(pr,0,upr,n,str);
	return 0;
}
