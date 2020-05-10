/*
 * =====================================================================================
 *
 *       Filename:  tri_final.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Saturday 28 December 2019 10:10:41  IST
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
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr2, int n) {
	    double area[n],p,x,y,z;
        for ( int i = 0; i < n; i += 1 ) {
                x = tr2[i].a;
                y = tr2[i].b;
                z = tr2[i].c;
                p = (x+y+z)/2;
                area[i] = p*(p-x)*(p-y)*(p-z);
        }
        for ( int i = n-2; i >= 0; i -= 1 ) {
                for ( int j = 0; j <= i; j += 1 ) {
                        if(area[j] > area[j+1]){
                                tr2[j].a = tr2[j].a + tr2[j+1].a;
                                tr2[j+1].a = tr2[j].a - tr2[j+1].a;
                                tr2[j].a = tr2[j].a - tr2[j+1].a;
                                tr2[j].b = tr2[j].b + tr2[j+1].b;
                                tr2[j+1].b = tr2[j].b - tr2[j+1].b;
                                tr2[j].b = tr2[j].b - tr2[j+1].b;
                                tr2[j].c = tr2[j].c + tr2[j+1].c;
                                tr2[j+1].c = tr2[j].c - tr2[j+1].c;
                                tr2[j].c = tr2[j].c - tr2[j+1].c;
                                area[j] = area[j] + area[j+1];
                                area[j+1] = area[j] - area[j+1];
                                area[j] = area[j] - area[j+1];
                        }
                }
        }

	for ( int i = 0; i < n; i += 1 ) {
		printf ( "%f\n",area[i] );
	}
}
triangle *tr;
int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
