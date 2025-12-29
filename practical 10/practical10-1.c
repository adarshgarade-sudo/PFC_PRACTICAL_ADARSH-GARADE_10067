#include <stdio.h>

int main() {printf("Adarsh_10067\n");
    int rows, cols, i, j;
    int arr[10][10];
    int max, min;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of 2D array:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    max = min = arr[0][0];

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(arr[i][j] > max)
                max = arr[i][j];
            if(arr[i][j] < min)
                min = arr[i][j];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
//OUTPUT
//Enter number of rows and columns: 2 2
//Enter elements of 2D array:
//1 3 4 6 
//Maximum element = 6
//Minimum element = 1