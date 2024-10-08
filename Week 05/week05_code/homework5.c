#include <stdio.h>

// findMax
int findMax(int a[], int size) {
    int max = a[0]; 
    for (int i = 1; i < size; i++) {
        if (a[i] > max) {
            max = a[i]; 
        }
    }
    return max;
}

int countOdd(int a[], int size) {
    int cnt = 0; 
    for (int i = 0; i < size; i++) {
        if (a[i] % 2 != 0) {
            cnt = cnt + 1; 
        }
    }
    return cnt; 
}
 

int main() {
    int array1[] = {1, -1, 100, 32, 64, -97, 42}; 
    int array2[] = {-100, 1, -10, 50, -40, 98, 110, 66}; 

    int size1 = sizeof(array1) / sizeof(array1[0]); 
    int size2 = sizeof(array2) / sizeof(array2[0]); 

    int max1 = findMax(array1, size1); 
    int max2 = findMax(array2, size2); 

    printf("max1: %d\n", max1); 
    printf("max2: %d\n", max2); 

    int countOdd1 = countOdd(array1, size1); 
    int countOdd2 = countOdd(array2, size2); 

    printf("countOdd1: %d\n", countOdd1); 
    printf("countOdd2: %d\n", countOdd2); 

    return 0;
}


