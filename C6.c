#include <stdio.h>
void printWord(int n) {
    char *words[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    if (n == 0) return;
    printWord(n / 10);
    printf("%s ", words[n % 10]);
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0) printf("Zero");
    else printWord(n);
    return 0;
}
