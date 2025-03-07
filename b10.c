#include <stdio.h>

// Hàm tính số Fibonacci sử dụng vòng lặp
unsigned int fibonacy(unsigned int n) {
    if (n <= 2) {
        return 1;  // Fibonacci(1) = 1, Fibonacci(2) = 1
    }

    unsigned int a = 1, b = 1, c;
    for (unsigned int i = 3; i <= n; i++) {
        c = a + b;  // Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
        a = b;      // Cập nhật giá trị của a
        b = c;      // Cập nhật giá trị của b
    }

    return b;  // Trả về Fibonacci(n)
}

int main() {
    unsigned int n;
    printf("Nhập vào số nguyên n để tính Fibonacci: ");
    scanf("%u", &n);
    
    printf("Fibonacci(%u) = %u\n", n, fibonacy(n));  // In kết quả Fibonacci(n)
    
    return 0;
}
