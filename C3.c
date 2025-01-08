#include <stdio.h>
int main() {
    int n, sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum = n % 10;
    while (n >= 10) n /= 10;
    sum += n;
    printf("Sum of first and last digit: %d\n", sum);
    return 0;
}

