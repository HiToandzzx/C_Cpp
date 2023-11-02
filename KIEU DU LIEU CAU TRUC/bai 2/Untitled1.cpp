#include <stdio.h>
#include <conio.h>

struct Diem{
	float x;
	float y;
};
typedef struct Diem DIEM;
void NhapDiem(DIEM &);
void XuatDiem(DIEM);

void NhapDiem(DIEM &d){
	printf("\nNhap toa do x: ");
	scanf("%f",&d.x);

	printf("\nNhap toa do y: ");
	scanf("%f",&d.y);
}

void XuatDiem(DIEM d){
	printf("\nToa do diem A la: (%3.1f, %3.1f)", d.x, d.y);
}

int main(){
	DIEM d;
	printf("Diem A: ");
	NhapDiem(d);
	XuatDiem(d);
	return 0;
}
