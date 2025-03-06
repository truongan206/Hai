#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n <= 1) {
        printf("Số %d không phải là số nguyên tố\n", n);
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            printf("Số %d không phải là số nguyên tố\n", n);
            return 0;
        }
    }
    printf("Số %d là số nguyên tố\n", n);
    return 0;
}
