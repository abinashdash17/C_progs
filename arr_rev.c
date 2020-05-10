/*
 * =====================================================================================
 *
 *       Filename:  arr_rev.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Wednesday 18 December 2019 03:09:28  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  ABINASH DASH (), abinashdash17@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    for (i=0;i<num/2;i++){
        *(arr+i) = *(arr+i)+*(arr+num-1-i);
        *(arr+num-1-i) = *(arr+i)-*(arr+num-1-i);
        *(arr+i) = *(arr+i)-*(arr+num-1-i);
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
