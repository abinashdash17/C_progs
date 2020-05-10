/*
 * =====================================================================================
 *
 *       Filename:  hrank_grades.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Thursday 16 April 2020 02:45:28  IST
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
int* gradingStudents(int grades_count, int* grades, int* result_count) {
	*result_count = grades_count;
	int *result_grade = (int*) malloc(grades_count*sizeof(int));
	for ( int i = 0; i < grades_count; i += 1 ) {
		if(grades[i] < 38 || (grades[i]%5 < 3) )
			result_grade[i] = grades[i];
		else{
			int temp = grades[i]%5;
			result_grade[i] = grades[i] + (5-temp);
		}
			
	}
	return result_grade;
}
int main(){
	int grade[4] = { 73,67,38,33};
	int* result = (int*) malloc(4*sizeof(int));
	int* res_c = (int*) malloc(1*sizeof(int));
	result  = gradingStudents(4,grade,res_c);
	
	for ( int i = 0; i < 4; i += 1 ) {
		printf ( "%d\n",result[i] );
	}
	return 0;

}
