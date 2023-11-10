#include <stdio.h>
#include <math.h>

int main(){
    int a[100];
    int n,max,min;
    // nhap day so va hien thi ra man hinh 
    printf("Nhap n: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("Day so vua nhap la: ");
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    // tim min,max va so sanh hieu vs 10
    max = a[0];
    for (int i = 1; i < n; i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    printf("\nMax = %d\n", max);
    min = a[0];
    for(int i = 1; i < n; i++){
        if(min > a[i]){
            min = a[i];
        }
    }
    printf("Min = %d\n", min);
    int b = max - min;
    printf("Hieu = %d\n", b);
    if(b > 10){
        printf("Hieu > 10\n");
    }else{
        printf("Hieu < 10\n");
    }
    // dem cap phan tu 
    int dem = 0;
    for(int i = 0; i < n; i++){
        if(a[i+1] > a[i]){
            dem = dem + 1;
        }
    }
    printf("So cap = %d\n", dem);
    // tinh tbc cac phan tu co gttd > 25
    int S = 0;
    for(int i = 0; i < n; i++){
        if(abs(a[i]) > 25){
            S = S + a[i];
        }
    }
    if(S == 0){
        printf("Ko ton tai tbc\n");
    }else{
        printf("TBC = %.2f\n", (float)S/n);
    }
    // tim cap co tich nho nhat
    int nho = a[0] * a[1];
    for(int i = 1; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] * a[j] < nho){
            nho = a[i] * a[j];
            }
        }
    }
    printf("Tich cap phan tu nho nhat = %d\n", nho);
    // tim phan tu le nho nhat
    int le = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] % 2 != 0 && a[i] < le){
            le = a[i];
        }
    }
    printf("Phan tu le nho nhat = %d", le);
    return 0;
}