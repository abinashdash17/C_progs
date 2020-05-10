/*
 * =====================================================================================
 *
 *       Filename:  arr_sum.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Wednesday 18 December 2019 02:21:39  IST
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

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
	int sum = 0;
	int i;
	if (gender=='b')  i=0;
	else  i=1;
		
		for (  ; i < number_of_students; i += 2 ) {
			sum = sum + *(marks+i);
		}
	return sum;
}


int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}
