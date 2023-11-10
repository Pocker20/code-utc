#include <stdio.h>

int main(){
    int n;
    float sum=0;
    printf("nhap n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n/2; i++){
        if(n % i ==0){
            sum += i;
        }
    }
    if(sum == n){
        printf("TRUE");
    }else{
        printf("FALSE");
    }
    return 0;
}