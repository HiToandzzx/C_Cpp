#include <stdio.h>
#include <conio.h>

struct DonThuc{
	float a;
	float n;
};
typedef struct DonThuc DONTHUC;
void NhapDT(DONTHUC &);
void XuatDT(DONTHUC);

void NhapDT(DONTHUC &dt){
	float temp;
	printf("\nNhap he so a: ");
	scanf("%f",&temp);
	dt.a = temp;
	printf("\nNhap so bac n: ");
	scanf("%f",&dt.n);
}

void XuatDT(DONTHUC dt){
	printf("\nP(X) = (%2.1f)x^%2.1f",dt.a,dt.n);
}

int main(){
	DONTHUC dt;
	NhapDT(dt);
	XuatDT(dt);
	return 0;
}
