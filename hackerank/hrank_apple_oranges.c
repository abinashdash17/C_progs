#include<stdio.h>
#include<stdlib.h>

void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int* apples, int oranges_count, int* oranges) {
        int app_loc[apples_count],ora_loc[oranges_count];
        int apple_inside = 0,orange_inside = 0;
        for(int i = 0;i<apples_count;i++){
                app_loc[i] = apples[i] + a;
                if (app_loc[i] >= s && app_loc[i] <= t )
                        apple_inside++;
        }
        for(int i = 0;i<oranges_count;i++){
                ora_loc[i] = oranges[i] + b;
                if (ora_loc[i] >= s && ora_loc[i] <= t )
                        orange_inside++;
        }
	printf ( "%d\n%d\n",apple_inside,orange_inside );
}

int main(){
	int s = 7,t=11,a=5,b=15,m=3,n=2;
	int apples[3] = {-2,2,1};
	int oranges[2] = {5,-5};
	countApplesAndOranges(s,t,a,b,m,apples,n,oranges);
	return 0;


}

