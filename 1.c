#include <stdio.h>
#include <math.h>
#include <iomanip>

void Tong(){
    int a[100];
    int n,S;
    printf("nhap n: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("nhap a[%d]: ",i);
        scanf("%d", &a[i]);
    }
    printf("day so vua nhap la: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    S = 1;
    int d = 0;
    for(int i = 0; i < n; i++){
        if(a[i] >= 4){
            S = S*a[i];
            d++;
        }
    }
    if(d == 0 || (d % 2 ==0 && S<0)){
        printf("FALSE");
    }else{
        printf("\nTBN = %f\n", pow(S, 1.0/d));
    }
}

void Max(){
    int a[100];
    int n,max;
    printf("nhap n: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("nhap a[%d]: ",i);
        scanf("%d", &a[i]);
    }
    printf("day so vua nhap la: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    max = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    printf("\nMax = %d\n", max);
}

void Min(){
    int n,d;
    int a[100], min, S;
    printf("nhap n: ");
    scanf("%d", &n);
    for(int i = 0; i <n; i++){
        printf("nhap a[%d]: ",i);
        scanf("%d", &a[i]);
    }
    printf("day so vua nhap la:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}

int main(){

}