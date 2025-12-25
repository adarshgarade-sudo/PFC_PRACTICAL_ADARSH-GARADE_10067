#include <stdio.h>
//Write a function to prints a right angle triangle of stars of height n.
void printTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    printf("Adarsh Garade_10067\n");
    int n;
    printf("Enter height: ");
    scanf("%d", &n);

    printTriangle(n);

    return 0;
}