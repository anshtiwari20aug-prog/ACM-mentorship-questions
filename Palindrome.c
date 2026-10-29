#include <stdio.h>

int main() {
    int n, new, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);
    new = n;

    // Reverse the digits
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    if (new == reversed) {
        printf("%d is a palindrome number.\n", new);
    } else {
        printf("%d is not a palindrome number.\n", new);
    }

    return 0;
}