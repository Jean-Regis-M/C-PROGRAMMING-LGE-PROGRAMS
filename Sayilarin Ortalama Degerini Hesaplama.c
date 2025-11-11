#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;
    float average;
    int i;
    
    printf("5 sayi giriniz:\n");
    
    for(i = 0; i < 5; i++) {
        printf("%d. sayi: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    
    average = (float)sum / 5;
    
    printf("Girilen sayilarin toplami: %d\n", sum);
    printf("Girilen sayilarin ortalamasi: %.2f\n", average);
    
    return 0;
}
