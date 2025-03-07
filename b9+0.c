#include <stdio.h>
#include <math.h>

// Hàm tính giai thừa với vòng lặp và kiểm tra tràn
double factorial(int n) {
    double result = 1.0;
    double sum=0.0;
    if (n == 0) return 1.0;
    for (int i = 1; i <= n; i++) {
        result *= i;
        sum+= 1.0/result;
    }
    printf("tổng là:%lf", sum);
    printf(" ");
    return result;
}

int main() {
    int n;
    printf("Nhập vào số nguyên n để tính giai thừa: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Giai thừa không tồn tại cho số âm.\n");
    } else {
        double result = factorial(n);
        printf("Giai thừa của %d là: %.0f\n", n, result);
    }

    return 0;
}
