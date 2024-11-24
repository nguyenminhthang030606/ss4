#include <stdio.h>

int main() {
    int number;

    // nhap so nguyen 
    printf("nhap so nguyen: ");
    scanf("%d", &number);

    //kiem tra duong , am hay = 0 
    if (number > 0) {
        printf("So %d la so duong.\n", number);
    } else if (number < 0) {
        printf("So %d là so am.\n", number);
    } else {
        printf("So %d la so 0.\n", number);
    }

    return 0;
}
 
