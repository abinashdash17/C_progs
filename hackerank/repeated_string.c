/*
 * =====================================================================================
 *
 *       Filename:  repeated_string.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Thursday 30 April 2020 01:58:02  IST
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
#include <string.h>
long long int repeatedString(char* s, long long int n) {
	unsigned int base_count = 0;
	size_t len = strlen(s);
	for ( int i = 0; i < len; i += 1 ) {
		if(s[i] == 'a')
			base_count++;
	}
	printf ( "%d\n",base_count );
	long long int count  = (long long int)(n/len) * base_count;
	long long int nearest = (long long int)(n/len) * len;
	for ( long long int i = 0; i < n-nearest; i += 1 ) {
		if(s[(i-1)%len] == 'a')
			count++;
	}
	return count;

}

int main(){
	char str[] = "aab";
	printf ( "%lld\n",repeatedString(str,10));
	return 0;
}

