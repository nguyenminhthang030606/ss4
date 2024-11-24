#include <stdio.h>

int main() {
    float a, b, c;

    // nhap vao ba canh 
    printf("Nhap vao do dai canh thu nhat: ");
    scanf("%f", &a);
    printf("Nhap vao do dai canh thu hai: ");
    scanf("%f", &b);
    printf("Nhap vao do dai canh thu ba: ");
    scanf("%f", &c);

    // Kiem tra dieu kien hop le cua tam giác
    if (a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Là 3 canh tam giac.\n");
    } else {
        printf("Không phai 3 canh tam giac.\n");
    }

    return 0;
}

