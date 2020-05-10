/*
 * =====================================================================================
 *
 *       Filename:  let_fq.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Wednesday 18 December 2019 11:43:33  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  ABINASH DASH (), abinashdash17@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main(){
	int n,fq[100];
	char str[100],set[100];
	scanf ( "%d", &n );
	fgets(str,100,stdin);
	set[0] = str[0];
	int ind = 0;
	for(int i=1;i<strlen(str);i++){
		bool exists=false;
		for ( int j = 0; j <= ind; j += 1 ) {
			if (str[i] == set[j]) {
				exists = true;
				break;
			}	
		}
		if (exists == false){
			ind++;
			set[ind] = str[i];
		}
	}

	for ( int i = 0; i < ind+1; i += 1 ) {
		fq[i] = 0;
		for ( int j = 0; j < strlen(str); j += 1 ) {
			if(set[i] == str[j])
				fq[i]++;
		}
	}
	for ( int i = 0; i < ind; i += 1 ) {
		printf ( "%d ",fq[i] );
	}
//	printf ( "%s %d",set,ind );	
	return 0;
}
