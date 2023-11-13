#include<stdio.h>
#include<cmath>
int main(){
	int a;
	printf("Nhap so a: ");
	scanf("%d", &a);
	int b;
	printf("Nhap so b: ");
	scanf("%d", &b);
	int c;
	printf("Nhap so c: ");
	scanf("%d", &c);
	int x1,x2;
	float nghiemkep = -b/2*a;
	int penta = b*b-4*a*c;
	float canpenta = (float)sqrt(b*b-4*a*c);
	if ( penta < 0 ){
		printf("phuong trinh vo nghiem");
	}else if ( penta == 0 ){
		printf("phuong trinh co nghiem kep: %f", nghiemkep );
	}else {
		printf("phuong trinh co 2 nghiem phan biet: ");
		printf("nghiem thu nhat la: %d", x1= (-b - canpenta)/2*a );
		printf("nghiem thu hai la: %d", x2= (-b + canpenta)/2*a );	
	}
	
}
