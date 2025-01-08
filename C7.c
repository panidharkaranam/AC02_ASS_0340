#include <stdio.h>
int main() {
    char bin[32];
    printf("Enter binary number: ");
    scanf("%s", bin);
    for (int i = 0; bin[i]; i++) 
        bin[i] = bin[i] == '0' ? '1' : '0';
    printf("One's complement: %s\n", bin);
    return 0;
}
