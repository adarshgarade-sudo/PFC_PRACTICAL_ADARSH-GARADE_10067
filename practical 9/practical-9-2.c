#include <stdio.h>

int main() { printf("Adarsh_10067\n");
    int n, i;
    int arr[100];
    int max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
//OUTPUT
//Enter number of elements: 5
//Enter array elements:
//2 4 6 99 23
//Maximum element = 99
//Minimum element = 2