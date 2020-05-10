/*
 * =====================================================================================
 *
 *       Filename:  gauss_elim0.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Sunday 10 May 2020 03:11:17  IST
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

int len;
void row_swap(float** a,int r1,int r2){
	//printf ( "swapping row %d and row %d\n",r1,r2 );
	for ( int i = 0; i < len+1; i += 1 ) {
		int temp = a[r1][i];
		a[r1][i] = a[r2][i];
		a[r2][i] = temp;
	}
}
void disp_mat(float** a){
	printf ( "\n" );
	for ( int i = 0; i < len; i += 1 ) {
		for ( int j = 0; j < len+1; j += 1 ) {
			printf ( "%0.2f ",a[i][j] );
		}
		printf ( "\n" );
	}
	printf ( "\n" );
}
void eliminate(float** a,int r,int c){
	if(r == len){
		return;
	}
	if(a[r][c] == 0){
		for ( int i = r+1; i < len; i += 1 ) {
			if (a[i][c] != 0 ){
				row_swap(a,r,i);
				break;
			}
		}
	}
	if(a[r][c] != 0){
		for ( int i = r+1; i < len; i += 1 ) {
			if(a[i][c] !=0){
				float multiplier = a[i][c] / a[r][c];
				for ( int j = c; j < len+1; j += 1 ) {
					a[i][j] = a[i][j] - multiplier * a[r][j];
				}
			}
		}
	}
	eliminate(a,r+1,c+1);
}
void rearrange(float** a){

	for ( int i = 0; i < len/2; i += 1 ) {
		for ( int j = 0; j < len+1; j += 1 ) {
			int temp = a[i][j];
			a[i][j] = a[len-1-i][j];
			a[len-1-i][j] = temp;
		}
	}
	for ( int i = 0; i < len; i += 1 ) {
		for ( int j = 0; j < len/2; j += 1 ) {
			int temp = a[i][j];
			a[i][j] = a[i][len-1-j];
			a[i][len-1-j] = temp;
		}
	}
}
void normalize(float** a){
	for ( int i = 0; i < len; i += 1 ) {
		if(a[i][i] != 0){
			a[i][len] = a[i][len]/a[i][i];
		}
	}

}

void show_res(float** a){
	printf ( "\n" );
	for ( int i = len-1; i >= 0; i -= 1 ) {
		printf ( "x[%d] = %f\n",len-i,a[i][len] );
	}
	printf ( "\n" );
}

int main(){
	len = 3;

	//float lin_arr[] = {1,1,1,3,2,1,1,4,5,0,2,7};// for 3x3 mat
	float lin_arr[] = {1,3,1,9,1,1,-1,1,3,11,5,35};
	//float lin_arr[] = { 2,1,-1,8, -3,-1,2,-11, -2,1,2,-3};
	//float lin_arr[] = {0,0,0,5,10, 0,0,3,0,9, 0,1,1,0,4, 1,0,0,0,1};
	//float lin_arr[] = {1,1,1,1,4, 1,0,0,0,1, 0,0,1,3,4, 0,0,0,1,1};
	//float lin_arr[] = {1,1,1,1,4, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0};
	
	float** a = (float**) malloc(len*sizeof(float*));
	
	for ( int i = 0; i < len; i += 1 ) {
		a[i] = (float*) malloc((len+1) * sizeof(float));
	}
	
	for ( int i = 0,ind = 0; i < len; i += 1 ) {
		for ( int j = 0; j < len+1; j += 1 ) {
			a[i][j] = lin_arr[ind++];
		}
	}

	disp_mat(a);
	eliminate(a,0,0);
	disp_mat(a);
	rearrange(a);
	disp_mat(a);
	eliminate(a,0,0);
	disp_mat(a);
	normalize(a);
	disp_mat(a);
	show_res(a);
	return 0;
}

