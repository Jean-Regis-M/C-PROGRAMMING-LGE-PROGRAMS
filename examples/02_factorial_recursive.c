#include <stdio.h>

long long factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main(void) {
    int number = 0;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &number) != 1 || number < 0) {
        fprintf(stderr, "Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    printf("%d! = %lld\n", number, factorial(number));
    return 0;
}
