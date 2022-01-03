#include <stdio.h>

int findMin(int vector[], int j, int size);

int main (){

    int vector[10] = {10, 3, 4, 55, 34, 2, 1, 32, 98, 76};

    int min = findMin(vector, 1, 10);

    printf("Minimo: %d", min);

    return 0;

}

int findMin(int vector[], int j, int size){
    int min;

    if (j == size){
        return vector[size];
    } else {
        min = findMin(vector, j+1, size);
        if (vector[j] < min){
            return vector[j];
        } else {
            return min;
        }
    }

}