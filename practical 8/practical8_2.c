#include <stdio.h>
//Swap 2 numbers using pass by reference
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    printf("Adarsh Garade_10067\n");
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Before Swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After Swap: x = %d, y = %d\n", x, y);
    return 0;

}
//Adarsh Garade_10067
//Enter two numbers: 10 20
//Before Swap: x = 10, y = 20
//After Swap: x = 20, y = 10
