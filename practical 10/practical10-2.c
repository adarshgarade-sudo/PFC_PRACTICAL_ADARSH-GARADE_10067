#include <stdio.h>

int main() { printf("Adarsh_10067\n");
    int n, i, j;
    int arr[10][10];
    int sum = 0;

    printf("Enter order of matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    
    for(i = 0; i < n; i++) {
        sum = sum + arr[i][i];
    }

    printf("Sum of diagonal elements = %d\n", sum);

    return 0;
}
//OUTPUT
//Enter order of matrix (n x n): 3 3 
//Enter elements of matrix:
//9 8 7 6 5 4 3 2 1
//Sum of diagonal elements = 11