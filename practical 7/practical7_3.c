#include <stdio.h>
//triangle pattern of alphabates
int main() {
    printf("Adarsh Garade_10067\n");
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;

}
//OUTPUT
//Adarsh Garade_10067
//Enter number of rows: 4
//A
//AB
//ABC
//ABCD
