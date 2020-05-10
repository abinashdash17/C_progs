/*
 * =====================================================================================
 *
 *       Filename:  repeated_string_taking_a_lot_of_time.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Thursday 30 April 2020 02:49:38  IST
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
long repeatedString(char* s, long n) {
        long count=0;
        size_t len = strlen(s);
        printf ( "%zu\n",len );
        for ( long i = 1; i < n+1; i += 1 ) {
                if(s[(i-1)%len] == 'a')
                        count++;
        }
        return count;

}	

int main(){
	char str[] = "a";
	printf ( "%ld\n",repeatedString(str,100000000000) );
	return 0;
}

