#include <stdio.h>
#include <string.h>

int main(int argc, char ** argv) {
    
    int average;
    int i;
    int size;
    int sum;
    
    sum = 0;
    size = 7;
    static int numbers[] = {1, -1, 100, 32, 64, -105, 33};
    
    for (i = 0; i < size; i++) {
        sum = sum + numbers[i];
    }
     
    average = sum/size;

    
    printf("Sum = %d, Average = %d\n", sum, average);
    
    return(0);
}
