#include <stdio.h>

int main() {
    int sayi;
    long long faktoriyel = 1;
    int i = 1;
    
    printf("Faktoriyeli hesaplanacak sayiyi girin: ");
    scanf("%d", &sayi);
    

    
    if(sayi < 0) {
        printf("Negatif sayilarin fakt0riyeli tanimsizdir.\n");
        return 0;
    }
    
    do {
        faktoriyel *= i;
        i++;
    } while(i <= sayi);
    
    printf("%d! = %lld\n", sayi, faktoriyel);
    
    return 0;
}
