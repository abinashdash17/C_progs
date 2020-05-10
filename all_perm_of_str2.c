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
#include <string.h>
int prev_num = -1;
int curr_num ;
void perm(int* pr,int lpr,int* upr,int lupr,char** argv){
	if(lupr == 1){
		
		char str[10]= "\0";
		for (int i = 0;i<lpr;i++){
			sprintf(str,"%s%d",str,pr[i]);
		}
		sprintf(str,"%s%d",str,upr[0]);
		int curr_num = atoi(str);
		if (curr_num > prev_num){
			for ( int i = 0; i < lpr; i += 1 ) {
				//printf ( "%s ",argv[pr[i]] );
				printf ( "%d ",pr[i] );
			}
			printf ( "%d\n",upr[0]);
			//printf ( "%s\n",argv[upr[0]]);
			prev_num = curr_num;
		}
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
	char *str[4] = {"ab","ab","ae","af"};	
	char *str2[9] = {"ab","ab","ae","af"};	
	int n = sizeof(str)/sizeof(str[0]);
	printf ( "%d\n",n );
 	int *pr = (int*) malloc((n-2)*sizeof(int));
	int *upr = (int*) malloc(n*sizeof(int));
	int ind = 0;
	upr[0] = 0;
	for(int i = 1 ; i<n;i++){
		upr[i] = (strcmp(str[i],str[i-1]) == 0) ? ind : ++ind;
	}

	 for ( int i = 0; i < n; i += 1 ) {
		printf ( "%d ",upr[i] );
		printf ( "%s ",str[i] );
		printf ( "\n" );
	} 
	perm(pr,0,upr,n,str);
	return 0;
}
