#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Nhập số n
    int sum = 0;

    // Tính tổng các ước của n (bao gồm cả n)
    for (int i = 1; i <= n; i++) {  // Duyệt từ 1 đến n
        if (n % i == 0) {  // Nếu i là ước của n
            sum += i;  // Cộng i vào tổng
        }
    }

    // Kiểm tra xem tổng các ước có bằng 2*n không
    if (sum == 2 * n) {  // Nếu tổng các ước bằng 2 * n, thì n là số hoàn hảo
        printf("Số %d là số hoàn hảo\n", n);
    } else {
        printf("Số %d không phải là số hoàn hảo\n", n);
    }

    return 0;
}
