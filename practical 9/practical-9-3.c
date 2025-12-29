#include <stdio.h>

int main() {printf("Adarsh_10067\n");
    int n, i, sum = 0;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            sum = sum + arr[i];
        }
    }

    printf("Sum of even elements = %d\n", sum);

    return 0;
}
//OUTPUT
//Enter number of elements: 5
//Enter array elements:
//2 5 4 8 6
//Sum of even elements = 20