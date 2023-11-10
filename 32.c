#include <stdio.h>
#include <math.h>

int main(){
    float sum=0,a;
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        a = sum + 1.0/(n*(n+1));
    }
    printf("tong: %f", a);
    return 0;
} 