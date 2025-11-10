#include <stdio.h>

int main() {
    int sayi;
    int i; 
    
    printf("Bir sayi girin: ");
    scanf("%d", &sayi);
    
    printf("0'dan %d'ye kadar olan çift sayilar:\n", sayi);
    for(i = 0; i <= sayi; i++) {
        if(i % 2 == 0) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
