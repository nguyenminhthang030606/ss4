#include <stdio.h>

int main() {
    int number;

    //yeu cau nhap so nguyen 
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);

    // Kiem tra chia het cho 3, 5 hoac ca 3 và 5
    if (number % 3 == 0 && number % 5 == 0) {
        printf("So %d chia het cho ca 3 và 5.\n", number);
    } else if (number % 3 == 0) {
        printf("So %d chia het cho 3.\n", number);
    } else if (number % 5 == 0) {
        printf("So %d chia het cho 5.\n", number);
    } else {
        printf("So %d khong chia het cho 3, 5 .\n", number);
    }

    return 0;
}

