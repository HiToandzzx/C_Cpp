#include <stdio.h>
void Nhap2so(float &a, float &b);
float TinhTong(float a, float b);
float TinhHieu(float a, float b);
float TinhTich(float a, float b);
float TinhThuong(float a, float b);
void SoDoi(float a, float b);
void SoNghichDao(float a);

int main(){
	float a,b;
	Nhap2so(a,b);
		printf("\n==========");
	printf("\nTong = %.2f",TinhTong(a,b));
		printf("\n==========");
	printf("\nHieu = %.2f",TinhHieu(a,b));
		printf("\n==========");
	printf("\nTich = %.2f",TinhTich(a,b));
		printf("\n==============");
	printf("\nThuong = %.2f",TinhThuong(a,b));
		printf("\n===================");
	SoDoi(a,b);
		printf("\n============================");
	SoNghichDao(a);
		printf("\n============================");

}

//Nhapso
void Nhap2so(float &a, float &b){
	printf("Nhap vao hai so nguyen a, b: ");
	scanf("%f%f",&a,&b);
}

//Tong
float TinhTong(float a, float b){
	return a+b;
}

//Hieu
float TinhHieu(float a, float b){
	return a-b;
}

//Tich
float TinhTich(float a, float b){
	return a*b;
}

//Thuong
float TinhThuong(float a, float b){
	return float(a)/b;
}

//HienThiSoDoi
void SoDoi(float a, float b){
	printf("\nSo doi cua %.2f la %.2f",a,-a);
	printf("\nSo doi cua %.2f la %.2f",b,-b);
}

//SoNghichDao
void SoNghichDao(float a){
	printf("\nSo nghich dao cua %.2f la %.2f",a,1.0/a);
}

