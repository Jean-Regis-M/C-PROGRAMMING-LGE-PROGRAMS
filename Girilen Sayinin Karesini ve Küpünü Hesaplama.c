#include <stdio.h>

int main() {
    int sayi;
    
    printf("Bir sayi girin: ");
    scanf("%d", &sayi);
    
    int kare = sayi * sayi;
    int kup = sayi * sayi * sayi;
    
    printf("Girilen sayi: %d\n", sayi);
    printf("Karesi: %d\n", kare);
    printf("Küpü: %d\n", kup);
    
    return 0;
}
