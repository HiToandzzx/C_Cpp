#include <stdio.h>

void NhapSo (int &a, int &b){
	do {
		printf("Nhap vao 2 so nguyen duong a, b: ");
		scanf("%d%d",&a,&b);
	}while (a<0 || b<0);
}

int UCLN(int a, int b){
    while (a*b != 0){ 
        if (a > b){
            a %= b; 
        }else{
            b %= a;
        }
    }
    return a + b;
}

int BCNN(int a,int b){
    return (a*b)/UCLN(a,b);
}

int main(){
	int a,b, ucln, bcnn;
	NhapSo (a,b);
	ucln = UCLN(a,b);
	printf("\nUCLN cua %d va %d la %d",a,b,ucln);
	bcnn = BCNN(a,b);
	printf("\nBCNN cua %d va %d la %d",a,b,bcnn);
	return 0;
}

