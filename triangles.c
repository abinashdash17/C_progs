/*
 * =====================================================================================
 *
 *       Filename:  triangles.c
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
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
	double ar;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	int ind[n],x,y,z;
	double area[n],p;
	for ( int i = 0; i < n; i += 1 ) {
		x = tr[i].a;
		y = tr[i].b;
		z = tr[i].c;
		p = (x+y+z)/2;
		area[i] = sqrt(p*(p-x)*(p-y)*(p-z));
		tr[i].ar = area[i];
		ind[i] = i;
	}
	for ( int i = n-2; i >= 0; i -= 1 ) {
		for ( int j = 0; j <= i; j += 1 ) {
			if(area[j] > area[j+1]){
				area[j] = area[j]+area[j+1];
				area[j+1] = area[j] - area[j+1];
				area[j] = area[j] - area[j+1];
				ind[j] = ind[j]+ind[j+1];
				ind[j+1] = ind[j] - ind[j+1];
				ind[j] = ind[j] - ind[j+1];
			}	
		}
	}

	triangle temp_tri[n];
	
	for ( int i = 0; i < n; i += 1 ) {
		int temp = ind[i];
		temp_tri[i].a = tr[temp].a;
		temp_tri[i].b = tr[temp].b;
		temp_tri[i].c = tr[temp].c;
	}
	
	for ( int i = 0; i < n; i += 1 ) {
		tr[i].a = temp_tri[i].a;
		tr[i].b = temp_tri[i].b;
		tr[i].c = temp_tri[i].c;
	}

}

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
		printf("%d %d %d %f\n", tr[i].a, tr[i].b, tr[i].c, tr[i].ar);
	}
	return 0;
}
