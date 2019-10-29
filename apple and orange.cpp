#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void countApplesAndOranges(int s, int t, int a, int b, int apples_size, int* apples, int oranges_size, int* oranges) {
    int count_apples=0,count_oranges=0,i,temp;
    for(i=0;i<apples_size;i++)
    {
        temp=(a+apples[i]);
        if((temp>=s)&&(temp<=t))
            count_apples++;
       
    }
    for(i=0;i<oranges_size;i++)
    {
        temp=(b+oranges[i]);
        if((temp>=s)&&(temp<=t))
            count_oranges++;
    }
    printf("%d %d",count_apples,count_oranges);
      
}

int main() {
    int s; 
    int t; 
    scanf("%i %i", &s, &t);
    int a; 
    int b; 
    scanf("%i %i", &a, &b);
    int m; 
    int n; 
    scanf("%i %i", &m, &n);
    int *apple = (int*)malloc(sizeof(int) * m);
    for (int apple_i = 0; apple_i < m; apple_i++) {
       scanf("%i",&apple[apple_i]);
    }
    int *orange =(int*) malloc(sizeof(int) * n);
    for (int orange_i = 0; orange_i < n; orange_i++) {
       scanf("%i",&orange[orange_i]);
    }
    countApplesAndOranges(s, t, a, b,m, apple,n, orange);
    return 0;
}

