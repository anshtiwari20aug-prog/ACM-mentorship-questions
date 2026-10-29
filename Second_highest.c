#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    int second_largest;
    if ((a > b && a < c) || (a > c && a < b)) {
        second_largest = a;
    }
    else if ((b > a && b < c) || (b > c && b < a)) {
        second_largest = b;
    }
    else {
        second_largest = c;
    }
    printf("Second largest number: %d\n", second_largest);

    return 0;
}