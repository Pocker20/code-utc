#include <stdio.h>
#include <math.h>

int main(){
	printf("Hello!\n");
	
	// bai 1 - a
	float a,b;
	printf("nhap a, b: ");
	scanf("%f%f", &a, &b);
	printf("TBC = %.2f\n", (a+b)/2);
	
	// bai 1 - b
	float min = a;
	if(min > b){
		min = b;
		printf("Min = %.2f\n", min);
	}else if(min == b){
		printf("2 so bang nhau\n");
	}else{
		printf("Min = %.2f\n", min);
	}
	
	// bai 1 - c
	int ngay;
	printf("nhap so ngay : ");
	scanf("%d", &ngay);
	if(ngay % 7 == 0){
		printf("%d tuan\n", ngay / 7);
	}else{
		printf("%d tuan %d ngay\n", ngay / 7, ngay % 7);
	}
	
	// bai 1 - d
	int c, d, e;
	printf("nhap c, d: ");
	scanf("%d%d", &c, &d);
	printf("chon phep tinh: ");
	scanf("%d", &e);
	switch(e){
		case 1:
			printf("%d\n", c+d);
			break;
		case 2:
			printf("%d\n", c-d);
			break;
		case 3:
			printf("%d\n", c*d);
			break;
		case 4:
			printf("%d\n", c/d);
			break;
		default:{
			printf("FALSE\n");
			break;
		}
	}
	
	// bai 1 - e
	int f;
	printf("nhap f: ");
	scanf("%d", &f);
	for(int i = 0; i < f; i++){
		printf("*");
	}
	printf("\n");
	
	// bai 1 - f
	int m,n;
	printf("nhap m,n : ");
	scanf("%d%d", &m, &n);
	for(int i = 0; i < m; i++){
		for(int i = 0; i < n; i++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	// bai 1 - g
	int g;
	printf("nhap g: ");
	scanf("%d", &g);
	for(int i = 1; i <= g; i++){
		for(int j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
