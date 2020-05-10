/*
 * =====================================================================================
 *
 *       Filename:  tokens.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Wednesday 18 December 2019 11:32:06  IST
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
#include <math.h>
#include <stdlib.h>

int main() {

    char *s,ch;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    for ( int i = 0; i < strlen(s); i += 1 ) {
	    ch = s[i];
	    if (ch==' ')
		    printf ( "\n" );
	    else
		    printf ( "%c",ch );
    }
    return 0;
}

