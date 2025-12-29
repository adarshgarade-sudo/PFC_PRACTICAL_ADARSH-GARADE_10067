#include <stdio.h>

int main() { printf("Adarsh_10067\n");
    int n, i, temp;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    for(i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("Reversed array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
//OUTPUT
//Adarsh_10067
//Enter number of elements: 5
//Enter array elements:
//1 2 3 4 5 
//Reversed array:
//5 4 3 2 1 
