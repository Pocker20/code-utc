#include <stdio.h>
#include <math.h>

int main(){
    int n;
    float sum=0, p=1;
    printf("nhap n: ");
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        p = p * i;
        sum = sum + p;
    }
    printf("tong: %f",sum);
    return 0;
}