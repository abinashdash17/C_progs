/*
 * =====================================================================================
 *
 *       Filename:  test2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Saturday 28 December 2019 01:26:10  IST
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

struct triangle
{
	int a;
	int b;
	int c;
	double ar;
};

typedef struct triangle triangle;
triangle* tr2;
void sort_by_area(triangle* tr, int n) {
	double area[n],p,x,y,z;
	for ( int i = 0; i < n; i += 1 ) {
		x = tr[i].a;
		y = tr[i].b;
		z = tr[i].c;
		p = (x+y+z)/2;
		area[i] = p*(p-x)*(p-y)*(p-z);
		tr[i].ar = area[i];
	}
	for ( int i = n-2; i >= 0; i -= 1 ) {
		for ( int j = 0; j <= i; j += 1 ) {
			if(tr[j].ar > tr[j+1].ar){
				tr[j].a = tr[j].a + tr[j+1].a;
				tr[j+1].a = tr[j].a - tr[j+1].a;
				tr[j].a = tr[j].a - tr[j+1].a;
				tr[j].b = tr[j].b + tr[j+1].b;
				tr[j+1].b = tr[j].b - tr[j+1].b;
				tr[j].b = tr[j].b - tr[j+1].b;
				tr[j].c = tr[j].c + tr[j+1].c;
				tr[j+1].c = tr[j].c - tr[j+1].c;
				tr[j].c = tr[j].c - tr[j+1].c;
				tr[j].ar = tr[j].ar + tr[j+1].ar;
				tr[j+1].ar = tr[j].ar - tr[j+1].ar;
				tr[j].ar = tr[j].ar - tr[j+1].ar;
			}	
			if(area[j] > area[j+1]){
				area[j] = area[j] + area[j+1];
				area[j+1] = area[j] - area[j+1];
				area[j] = area[j] - area[j+1];
			}
		}
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	tr2 = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr2[i].a, &tr2[i].b, &tr2[i].c);
	}
	sort_by_area(tr2, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr2[i].a, tr2[i].b, tr2[i].c);
	}
	return 0;
}
