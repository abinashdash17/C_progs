/*
 * =====================================================================================
 *
 *       Filename:  hrank_stair_case.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Wednesday 15 April 2020 02:09:29  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include<stdio.h>

void staircase(int n){
	char ch;
	for (int i = 1;i<=n;i++){
		for (int j = 1;j<=n;j++){
			ch = j>(n-i) ? '#' : ' ';
			printf ( "%c",ch );
		}
		printf ( "\n" );
	}
}
int main(){
	staircase(7);

}
