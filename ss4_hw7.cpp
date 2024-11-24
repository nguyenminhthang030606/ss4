#include <stdio.h>

int main() {
    int year;

    // yeu cau nhap nam 
    printf("Nhap vao mot nam: ");
    scanf("%d", &year);

    // Kiem tra xem nam co phai nam nhuan không
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Nam %d la nam nhuan.\n", year);
    } else {
        printf("Nam %d khong phai la nam nhuan.\n", year);
    }

    return 0;
}
