#include <stdio.h>
#include <math.h>
void NhapSo(float &x, int &n);
float TinhS_a(float x, int n);
float TinhS_b(float x, int n);
float TinhS_c(float x, int n);
float TinhS_d(float x, int n);
float TinhS_e(float x, int n);
float TinhS_f(float x, int n);
float TinhS_g(float n);


int main(){
	float x ;
	int n;
	NhapSo(x,n);
	printf("\na) S= %.f",TinhS_a(x,n));
	printf("\nb) S= %.f",TinhS_b(x,n));
	printf("\nc) S= %.f",TinhS_c(x,n));
	printf("\nd) S= %.2f",TinhS_d(x,n));
	printf("\ne) S= %.f",TinhS_e(x,n));
	printf("\ne) S= %.f",TinhS_f(x,n));
	printf("\ne) S= %.f",TinhS_g(n));
}

void NhapSo(float &x, int &n){
	do {
		printf("Nhap so nguyen x va so thuc n>0: ");
		scanf("%f%d",&x,&n);
	} while (n<0);

}

//a
float TinhS_a(float x, int n){
	float s=0;
	for (int i=1 ; i<=n ; i++)
		s = s + pow(x,i);
	return s;
}

//b
float TinhS_b(float x, int n){
	float s=0;
	for (int i=1 ; i<=n ; i++)
		s = s + pow(x,2*i);
	return s;
}

//c
float TinhS_c(float x, int n){
	float s=0;
	for (int i=0 ; i<=n ; i++)
		s = s + pow(x,(2*i)+1);
	return s;
}

//d 
float TinhS_d(float x, int n){
	float s=0,j;
	for (int i=1 ; i<=n ; i++){
		j = j + i;
		s = s + pow(x,i)/j;
	}
	return s;
}

//e
float TinhS_e(float x, int n){
	float s=0,k=1;
	for (int i=1 ; i<=n ; i++){
		k = k * i;
		s = s + pow(x,i)/k;
	}
	return s;
}

//f
float TinhS_f(float x, int n){
	float s=1,l=1;
	for (int i=1 ; i<=n ; i++){
		l = l * i;
		s = s + pow(x,i)/l;
	}
	return s;
}

//g
float TinhS_g(float n){
	float s=0;
	for (int i=1 ; i<=n ; i++)
		s = s + pow(-1,i-1)*i;
	return s;
}
