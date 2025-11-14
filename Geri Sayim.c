#include <stdio.h>

int main() {
    int sayi;
    int i; 
    
    printf("Bir sayi girin: ");
    scanf("%d", &sayi);
    
    
    printf("Geri sayim:\n");
    
    for(i = sayi; i >= 0; i--) {
        printf("%d\n", i);
    }
    
    return 0;
}
