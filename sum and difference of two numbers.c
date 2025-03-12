#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int x,y;
    float u,v;
    scanf("%d %d", &x, &y);
    scanf("%f %f", &u, &v);
    printf("%d %d \n",x+y, x-y);
    printf("%.1f %.1f",u+v, u-v);
    return 0;
}