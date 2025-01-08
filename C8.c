#include <stdio.h>
#include <string.h>
int main() {
    char bin[32];
    int carry = 1, i;
    printf("Enter binary number: ");
    scanf("%s", bin);
    for (i = strlen(bin) - 1; i >= 0; i--) {
        if (bin[i] == '1' && carry) bin[i] = '0';
        else if (carry) { bin[i] = '1'; carry = 0; }
    }
    printf("Two's complement: %s\n", bin);
    return 0;
}
