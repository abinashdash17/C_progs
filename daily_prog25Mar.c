/*
 * =====================================================================================
 *
 *       Filename:  daily_prog25Mar.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Wednesday 25 March 2020 05:52:41  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  ABINASH DASH (), abinashdash17@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int main(){
	char str1[]="is2 a3 this1 co4w";
	int wc = 0;
	for(int i=0; str1[i] != '\0' ;i++){
		if (str1[i] == ' ')
			wc++;
	}
	wc++;
	int wloc[wc+1];
	wloc[0] = 0;
	for(int i=0,j=1; ;i++){
		if (str1[i] == ' '){
			wloc[j] = i-1;
			j++;
		}
		if (str1[i] == '\0'){
			wloc[j] = i-1;
			j++;
			break;
		}
	}
	printf ( "%s\n",str1 );
	for ( int i = 0; i < wc+1;  i++ ) {
		printf("%d",wloc[i]);
	}
	int seq[wc+1];
	return 0;
}
