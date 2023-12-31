#include <stdio.h>

int main(){
    float avg = 0;
    int array[10]; // Declaration of array

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]); // Insertion of data in array
        avg+=array[i];
    }

    printf("Average %.2f", avg/10);
    
    return 0;
}



int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    double mean = calculate_mean(arr, size);
    double std_deviation = calculate_standard_deviation(arr, size, mean);

    printf("Mean: %.2f\n", mean);
    printf("Standard Deviation: %.2f\n", std_deviation);

    return 0;
}
