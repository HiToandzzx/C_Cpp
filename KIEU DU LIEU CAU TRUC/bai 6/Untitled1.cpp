#include <stdio.h>
#include <conio.h>

struct hopsua{
	char nhanhieu [20];
	float trongluong;
	unsigned int hansudung;
};
typedef struct hopsua HOPSUA;

void Nhaphopsua(HOPSUA &hs){
	printf("Nhap nhan hieu cua hop sua: ");
	gets(hs.nhanhieu);
	
	printf("Nhap trong luong cua hop sua: ");
	scanf("%f", &hs.trongluong);
	
	printf("Nhap han su dung: ");
	scanf("%d",&hs.hansudung);
}

void Xuathopsua(HOPSUA hs){
	printf("\t\n===THONG TIN HOP SUA===");
	printf("\nNhan hieu: %s",hs.nhanhieu);
	printf("\nKhoi luong tinh: %.2f (g)",hs.trongluong);
	printf("\nHan su dung %d ngay ke tu ngay san xuat",hs.hansudung);
}

int main(){
	HOPSUA hs;
	Nhaphopsua(hs);
	Xuathopsua(hs);
	return 0;
}
