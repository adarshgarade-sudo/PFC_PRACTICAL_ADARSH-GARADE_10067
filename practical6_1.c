#include <stdio.h>
//AIM 1.) Print numbers from a to b using loops 
int main() { printf("Adarsh Garade_10067\n");
    int a, b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);

    for (; a <= b; a++) {
        printf("%d  ", a);
    }

    return 0;
}