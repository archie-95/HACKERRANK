
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int n,min,max,i,cmin=0,cmax=0;
	int *a;
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	min=a[0];
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			cmax++;
		}
		if(a[i]<min)
		{
			min=a[i];
			cmin++;
		}
	}
	printf("%d %d",cmax,cmin );
}

