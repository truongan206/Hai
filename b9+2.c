#include <stdio.h>

void convert_to_binary(unsigned int n) {
    // Chuyển đổi sang hệ nhị phân
    printf("Hệ nhị phân: ");
    for (int i = 31; i >= 0; i--) {
        // Kiểm tra bit tại vị trí i
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

void convert_to_octal(unsigned int n) {
    // Chuyển đổi sang hệ bát phân
    printf("Hệ bát phân: %o\n", n);
}

void convert_to_hexadecimal(unsigned int n) {
    // Chuyển đổi sang hệ thập lục phân
    printf("Hệ thập lục phân: %X\n", n);
}

int main() {
    unsigned int n;
    
    // Nhập số nguyên dương n
    printf("Nhập vào một số nguyên dương n: ");
    scanf("%u", &n);

    // Kiểm tra số nhập vào có phải số nguyên dương không
    if (n <= 0) {
        printf("Vui lòng nhập một số nguyên dương.\n");
    } else {
        // Chuyển đổi và in kết quả
        convert_to_binary(n);
        convert_to_octal(n);
        convert_to_hexadecimal(n);
    }

    return 0;
}
