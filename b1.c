#include <stdio.h>

void nhap(int a[], int n){
    printf("Nhập các phần tử trong mảng:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);  // Corrected this line
    }
}

int sum(int a[], int n){
    int res = 0;
    for(int i = 0; i < n; i++){
        res += a[i];
    }
    return res;  // Moved return statement outside the loop
}

int main() {
    int n, a[10];
    printf("Nhập số lượng phần tử trong mảng: ");
    scanf("%d", &n);
    
    nhap(a, n);  // Input array
    printf("Tổng các phần tử trong mảng là: %d\n", sum(a, n));  // Display sum
    return 0;
}
