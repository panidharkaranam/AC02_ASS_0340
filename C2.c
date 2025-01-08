#include <stdio.h>
int main() {
    int n, last, first;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n % 10;
    while (n >= 10) n /= 10;
    first = n;
    printf("First: %d, Last: %d\n", first, last);
    return 0;
}
