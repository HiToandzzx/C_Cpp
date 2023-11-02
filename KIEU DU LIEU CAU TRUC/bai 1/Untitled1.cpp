#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>

typedef struct 
{ 
 	float Tu, Mau;
}PhanSo;


void NhapPS(PhanSo &ps);
void InPS(PhanSo ps);

int main(){
	PhanSo p; 
	NhapPS(p);
	InPS(p);
	return 0;
}

void NhapPS(PhanSo &ps){
	printf("Nhap tu so: ");
	scanf("%f",&ps.Tu);
	
	do{
	printf("\nNhap mau so: ");
	scanf("%f",&ps.Mau);
	}while (ps.Mau==0);
}

void InPS(PhanSo ps){
	printf("\nPhan so la: %f / %f",ps.Tu, ps.Mau);
}

