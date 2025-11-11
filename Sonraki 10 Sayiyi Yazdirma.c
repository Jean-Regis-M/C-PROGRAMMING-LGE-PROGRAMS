#include <stdio.h>

int main() {
    int number, i ;
    
    printf("Bir sayi girin: ");
    scanf("%d", &number);
    
    printf("%d sayisindan sonraki 10 sayi:\n", number);
    
    for(i = 1; i <= 10; i++) {
        printf("%d ", number + i);
    }
    printf("\n");
    
    return 0;
}
