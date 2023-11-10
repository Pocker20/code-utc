#include <stdio.h>

int main(){
    int a[100];
    int n,max;
    // nhap day so va hien thi ra man hinh 
    printf("nhap n: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("day so vua nhap la: ");
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    // tim max va kiem tra chia 5
    max = a[0];
    for (int i = 1; i < n; i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    printf("\nMax = %d\n", max);
    if(max % 5 == 0){
        printf("max chia het cho 5\n");
    }else{
        printf("max khong chia het cho 5\n");
    }
    // tinh trung binh cong va so sanh vs 4
    int S = 0;
    for (int i = 0; i < n; i++){
        if(a[i] < 0 || a[i] % 2 == 0){
            S = S + a[i];
        }
    }
    printf("TBC : %.2f\n", (float)S/n);
    if((float)S/n > 4.0){
        printf("TBC lon hon 4.0\n");
    }else{
        printf("TBC nho hon 4.0\n");
    }
    // tinh tong cac so chia het cho 7,8 va kiem tra tong chia 7
    int P = 0;
    for (int i = 0; i < n; i++){
        if(a[i] % 7 == 0 || a[i] % 8 == 0){
            P = P + a[i];
        }
    }
    printf("Tong = %d\n", P);
    if(P % 7 == 0){
        printf("Tong chia het cho 7\n");
    }else{
        printf("Tong ko chia het cho 7\n");
    }
    // dem so phan tu chia 5 du 1 va 2 va kiem tra chia 4
    int du = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 5 == 1 || a[i] % 5 == 2){
            du = du + 1;
        }
    }
    printf("so phan tu = %d\n", du);
    if(du % 4 == 0){
        printf("so phan tu chia het cho 4");
    }else{
        printf("so phan tu ko chia het cho 4");
    }
}
