// What this algorithm does?
// Calculate complexity

#include <stdio.h>

int mS (int A[], int n);

int main (){

    int Vector[] = {22, 43, 4, 3, 2, 87, 55, 7, 35, 54, -9};

    printf("Result: %d \n", mS(Vector, 11));

    return 0;

}

int mS (int A[], int n){

    int max = 0;

    for (int left = 1; left < n; left++)
    {
        int sum = 0;
        for (int right = left; right < n; right++)
        {
           sum = sum + A[right];
           if (sum > max) {
               max = sum;
           }
        }
    }
    
    return max;

}