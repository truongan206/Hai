#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    float sum=0.0;
    for(int i=1; i<=n; i++){
        sum+=1.0/i;
    }
    printf("%.2f", sum);
    return 0;
}
