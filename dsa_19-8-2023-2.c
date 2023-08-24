#include <stdio.h>

int main() {
    int arr[2][3];
    int i, j;

    
    printf("Enter elements of the multi dimensional array:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter element at arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    
    printf("Entered multi dimentional array:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}