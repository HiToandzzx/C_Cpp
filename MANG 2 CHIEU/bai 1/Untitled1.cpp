#include <stdio.h>
#define MAXC 5

void NhapMaTran (int a[][MAXC], int &n){
	do{
		printf("Nhap so hang cua ma tran vuong: ");
		scanf("%d",&n);
	}while (n<=2 && n>=5);
	
	for(int i=0 ; i<n ; i++)
		for (int j=0 ; j<n ; j++){
			printf("Nhap a[%d][%d]: ", i,j);
			scanf("%d", &a[i][j]);
		}
}

void XuatMaTran (int a[][MAXC], int &n){
	for (int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++)
			printf("%5d", a[i][j]);
			printf("\n");
	}
}

int TongDCChinh(int a[][MAXC], int n){
	int tong=0;
	for (int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++)
			if(i==j)
				tong+=a[i][j];
	}
		return tong;
}

void DemPTuChan(int a[][MAXC], int n){
	int dem=0;
	for (int i=0 ; i<n ; i++)
		for(int j=0 ; j<n ; j++){
			if(a[i][j]%2==0)
				dem++;
	}
	printf("\nCo %d phan tu chan trong ma tran!", dem);
}

void DongChan(int a[][MAXC], int n, int d){
		for(int j=0 ; j<n ; j++){
			if(a[d][j]%2==0)
				printf("\nCac phan tu thuoc dong chan la: %d   ", a[d][j]);
	}

}

int main(){
	int a[MAXC][MAXC], n, d;
	NhapMaTran(a,n);
		printf("\nMa tran vua nhap la: \n");
	XuatMaTran(a,n);
	//a
	printf("\nTong phan tu tren duong cheo chinh = %d", TongDCChinh(a,n));
	//b
	DemPTuChan(a,n);
	//c
	DongChan(a,n,d);
}
