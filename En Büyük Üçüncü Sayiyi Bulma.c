#include <stdio.h>

int main() {
    int numbers[10];
    int i, j, temp;
    
    printf("10 sayi giriniz:\n");
    
    // 10 sayiyi al
    for(i = 0; i < 10; i++) {
        printf("%d. sayi: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    // Sayilari büyükten küçüge sirala (Bubble Sort)
    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9 - i; j++) {
            if(numbers[j] < numbers[j + 1]) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    
    // En büyük üçüncü sayiyi bul (tekrarlari atlayarak)
    int thirdLargest = numbers[0];
    int count = 1;
    
    for(i = 1; i < 10; i++) {
        if(numbers[i] < numbers[i - 1]) {
            count++;
            if(count == 3) {
                thirdLargest = numbers[i];
                break;
            }
        }
    }
    
    printf("En büyük üçüncü sayi: %d\n", thirdLargest);
    
    return 0;
}
