#include <stdio.h>

int main(void) {
    int value = 0;
    long long sum = 0;

    printf("Enter integers to sum (Ctrl+D to finish):\n");
    while (scanf("%d", &value) == 1) {
        sum += value;
    }

    printf("Total sum: %lld\n", sum);
    return 0;
}
