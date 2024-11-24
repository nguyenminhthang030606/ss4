#include <stdio.h>

int main() {
    int old_index, new_index, consumption;
    float cost = 0;

    // Nhap vao so cu va so moi 
    printf("Nhap chu so cu (dau thang): ");
    scanf("%d", &old_index);
    printf("Nhap chu so moi (cuoi thang): ");
    scanf("%d", &new_index);

    // Kiem tra tinh hop le 
    if (new_index < old_index) {
        printf("Chi so moi khong duoc nho hon so cu.\n");
        return 1; // Ket thuc chuong trinh do loi 
    }

    // Tinh luong dien tieu thu 
    consumption = new_index - old_index;

    // Tinh tien dien theo bang 
    if (consumption <= 50) {
        cost = consumption * 10000; // 10.000 VNÐ/kWh
    } else if (consumption <= 100) {
        cost = 50 * 10000 + (consumption - 50) * 15000; // 15.000 VNÐ/kWh cho 50-100
    } else if (consumption <= 150) {
        cost = 50 * 10000 + 50 * 15000 + (consumption - 100) * 20000; // 20.000 VNÐ/kWh cho 100-150
    } else if (consumption <= 200) {
        cost = 50 * 10000 + 50 * 15000 + 50 * 20000 + (consumption - 150) * 25000; // 25.000 VNÐ/kWh cho 150-200
    } else {
        cost = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (consumption - 200) * 30000; // 30.000 VNÐ/kWh trên 200
    }

    // Hien  thi ket qua  
    printf("Luong dien da dung: %d kWh\n", consumption);
    printf("so tien phai tra: %.2f VNÐ\n", cost);

    return 0;
}

