#include <stdio.h>

int main() {
    int a, b;
    printf("Nhập lần lượt GDP năm 2014 và tốc độ tăng trưởng kinh tế (tính theo phần trăm): ");
    scanf("%d %d", &a, &b);  // Nhập GDP và tốc độ tăng trưởng

    int year = 2014;  // Bắt đầu từ năm 2014
    int original_gdp = a;  // Lưu giá trị GDP ban đầu

    // Tính GDP qua các năm cho đến khi GDP đạt gấp đôi
    while (a < 2 * original_gdp) {
        a = a + a * b / 100;  // Cập nhật GDP theo tốc độ tăng trưởng hàng năm
        year++;  // Cập nhật năm
    }

    // In ra kết quả
    printf("Năm khi GDP đạt gấp đôi: %d\n", year);  // In ra năm mà GDP đạt gấp đôi
    printf("GDP khi đó: %d\n", a);  // In ra GDP khi đó

    return 0;
}
