#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void kangaroo(int x1, int v1, int x2, int v2) {
	long int temp1=0,temp2=0,i,j;
    if((x2>x1)&&(v2>v1))
    {
        printf("NO");
        return;
    }
    for(i=0;temp1<1000000000&&temp2<1000000000;i++)
    {
    	temp1=x1+(i*v1);
    	temp2=x2+(i*v2);
    	if(temp1==temp2)
    	{
    		printf("YES");
    		return;
    		
		}
		
	}
	printf("NO");
	return;
   
}

int main() {
    int x1; 
    int v1; 
    int x2; 
    int v2; 
    scanf("%i %i %i %i", &x1, &v1, &x2, &v2);

    kangaroo(x1, v1, x2, v2);
    return 0;
}

