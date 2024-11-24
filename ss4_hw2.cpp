#include <stdio.h>

int main() {
    int number;

    // nhap so nguyen  
    printf("Nhap so nguyen: ");
    scanf("%d", &number);

    // Kiem tra so do la chan hay le 
    if (number % 2 == 0) {
        printf("So %d la so chan.\n", number);
    } else {
        printf("So %d la so le.\n", number);
    }

    return 0;
}

