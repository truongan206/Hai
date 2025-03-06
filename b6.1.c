#include <stdio.h>

// Hàm tính UCLN của a và b
int UCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Hàm tính BCNN của a và b
int BCNN(int a, int b) {
    return (a * b) / UCLN(a, b);
}

int main() {
    int a, b;
    
    // Nhập hai số
    printf("Nhập số a: ");
    scanf("%d", &a);
    printf("Nhập số b: ");
    scanf("%d", &b);

    // Tính và in ra UCLN và BCNN của a và b
    int ucln = UCLN(a, b);
    int bcnn = BCNN(a, b);

    printf("UCLN của %d và %d là: %d\n", a, b, ucln);
    printf("BCNN của %d và %d là: %d\n", a, b, bcnn);

    return 0;
}
