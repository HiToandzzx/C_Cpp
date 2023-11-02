#include <stdio.h>
#include <conio.h>

struct Diem{
	float x;
	float y;
};
typedef struct Diem DIEM;
void NhapDiem(DIEM &);
void XuatDiem(DIEM);

struct DuongTron{
	DIEM i;
	float r;
};
typedef struct DuongTron DUONGTRON;
void NhapDuongTron(DUONGTRON &);
void XuatDuongTron(DUONGTRON);
float tinhDT(DUONGTRON);
float tinhCV(DUONGTRON);


void NhapDiem(DIEM &d){
	float temp;
	printf("\nNhap toa do x: ");
	scanf("%f",&temp);
	d.x = temp;
	
	printf("\nNhap toa do y: ");
	scanf("%f",&temp);
	d.y = temp;
}

void XuatDiem(DIEM d){
	printf("%8.f, %8.f", d.x, d.y);
}

void NhapDuongTron(DUONGTRON &c){
	float temp;
	printf("\n\tNhap tam duong tron: ");
	NhapDiem (c.i);
	printf("\nNhap ban kinh duong tron: ");
	scanf("%f",&temp);
	c.r = temp;
}

void XuatDuongTron(DUONGTRON c){
	printf("((%5.2f, %5.2f), %5.2f)", c.i.x, c.i.y, c.r);
}

float tinhDT(DUONGTRON n){
	return 3.14 * n.r * n.r;
}

float tinhCV(DUONGTRON n){
	return 2 * 3.14 * n.r;
}


int main(){
	DIEM d;
	DUONGTRON n;
	NhapDuongTron(n);
    XuatDuongTron(n);
    float ChuVi = tinhDT(n);
    printf("\nChu vi duong tron = %.2f", ChuVi);

    float DienTich = tinhCV(n);
    printf("\nDien tich duong tron = %.2f", DienTich);
	return 0;
}

