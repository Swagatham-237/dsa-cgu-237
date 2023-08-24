#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int middle = size / 2;
    if (size % 2 == 1) {
        int middleElement = arr[middle];
        printf("The median is: %d\n", middleElement); // odd 
    } 
    else {
        int middleElement = ((arr[middle-1]+arr[middle])/2);    // even
        printf("The median is: %d\n", middleElement);   
    }
    return 0;
}