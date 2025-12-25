#include <stdio.h>
// Sum of even using continue
int main() {
    printf("Adarsh Garade_10067\n");
    int a, b, sum = 0;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    for (int i = a; i <= b; i++) {
        if (i % 2 != 0) {
            continue;
        }
        sum = i;
    }

    printf("Sum of even : %d\n", sum);

    return 0;
}