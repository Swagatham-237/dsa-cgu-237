#include <stdio.h>
#include <math.h>

double calculate_mean(int arr[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

double calculate_standard_deviation(int arr[], int size, double mean) {
    double sum_of_squares = 0.0;
    for (int i = 0; i < size; i++) {
        sum_of_squares += pow(arr[i] - mean, 2);
    }
    return sqrt(sum_of_squares / size);
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