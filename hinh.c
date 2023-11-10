#include <stdio.h>

int main(){
    int h;
    printf("nhap h: ");
    scanf("%d", &h);
    for(int i = 0; i < h; i++){
        for(int j=0;j<h-i-1;j++){
            printf(" ");
        }
        for(int j =0; j<i+1; i++){
            printf("*");
        }
        printf("\n");
        break;
    }
    return 0;
}