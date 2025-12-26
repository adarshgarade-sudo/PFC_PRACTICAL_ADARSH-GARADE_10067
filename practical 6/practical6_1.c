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
// OUTPUT
//Adarsh Garade_10067
//Enter a : 2
//Enter b : 9
//2  3  4  5  6  7  8  9
