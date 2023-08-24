#include <stdio.h>

int main() {
    int arr1[2][3];
    int arr2[2][3];
    int sum[2][3];
    int i, j;

    
    printf("Enter elements of the first multi dimensional array:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter element at arr1[%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    
    printf("Enter elements of the second multi dimensional array:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter element at arr2[%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    
    printf("Resultant multi dimensional array after addition:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}