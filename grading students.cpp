#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* solve(int grades_size, int* grades ){
    int *result=(int*)malloc(sizeof(int)*grades_size);
    int i;
    for(i=0;i<grades_size;i++)
    {
        if(grades[i]<38)
        {
            result[i]=grades[i];
        }
        else
        {
    
            if((grades[i]%5)>2)
            {
		
		
                result[i]=(grades[i]+(5-(grades[i]%5)));
            }
            else
                result[i]=grades[i];
        }
    }
    
    

    return result;
    
}

int main() {
    int n; 
    scanf("%d", &n);
    int *grades =(int*) malloc(sizeof(int) * n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       scanf("%d",&grades[grades_i]);
    }
    
    int* result = solve(n, grades);
    for(int result_i = 0; result_i < n; result_i++) {
        if(result_i) {
            printf("\n");
        }
        printf("%d", result[result_i]);
    }
    puts("");
    

    return 0;
}

