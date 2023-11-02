// Chuong trinh tao ma tran so nguyen kich thuoc mxn 
#include<stdio.h> 
#define MAXD 5
#define MAXC 10

// Khai bao cac nguyen mau ham 
void NhapMaTran(int a[][MAXC], int &m, int &n);
void XuatMaTran(int a[][MAXC], int m, int n);
int tinhtongDuong(int a[][MAXC], int m, int n);
int TongHang(int a[][MAXC], int n, int d);
void KiemTraDuong(int a[][MAXC], int m, int n);
int KiemTraToanDuong(int a[][MAXC], int m, int n);

// Ham main 
int main(){    
	int b[MAXD][MAXC], m, n, d; 
    NhapMaTran(b, m, n); 
    	printf("\nMa tran vua nhap: \n"); 
    XuatMaTran(b, m, n);
	//a 
    	printf("\nTong cac so duong trong mang = %d ", tinhtongDuong(b, m, n));
    //b
    printf("\nNhap so dong muon tinh: ");
	scanf("%d",&d);
	printf("\nTong cac gia tri tren dong %d = %d ", d,TongHang(b, n, d));
	//c
	KiemTraDuong(b, m, n);
	//d
	if(KiemTraToanDuong(b,m,n)==0)
		printf("\nMa tran khong toan duong!");
	else 
		printf("\nMa tran toan so duong ");
    return 0;  
}

// Dinh nghia cac ham  
void NhapMaTran(int a[][MAXC], int &m, int &n){    
	do{
         printf("Nhap so dong, so cot cua ma tran: ");
         scanf("%d%d", &m, &n);
    }while(!(m>=2 && m<=5) && !(n>=2 && n <=10));
    for(int i=0 ; i<m ; i++)
        for(int j=0 ; j<n ; j++){    
			printf("Nhap a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
}
void XuatMaTran(int a[][MAXC], int m, int n){  
	for(int i=0 ; i<m ; i++){    
		for (int j=0 ; j<n ; j++)
            printf("%5d", a[i][j]);
        printf("\n");
     }
}

int tinhtongDuong(int a[][MAXC], int m, int n){
	int sum=0;
		for(int i=0 ; i<m ; i++){    
			for (int j=0 ; j<n ; j++)
				if(a[i][j]>0)
					sum+=a[i][j];
		}
	return sum;
}

int TongHang(int a[][MAXC], int n, int d){ 
	int tong=0;
  	for(int j=0; j<n; j++)
     	tong += a[d][j];
     	return tong;
	
}

void KiemTraDuong(int a[][MAXC], int m, int n){
	int dem=0;
	for(int i=0 ; i<m ; i++){    
		for (int j=0 ; j<n ; j++){
			if(a[i][j]>0)
				dem++;
		}
	}
		if(dem>=0)
			printf("\nMang co gia tri duong!");
		else 
			printf("\nMang khong co gia tri duong!");	
}

int KiemTraToanDuong(int a[][MAXC], int m, int n){
	for(int i=0 ; i<m ; i++){    
		for (int j=0 ; j<n ; j++){
			if(a[i][j]<0){
				return 0;
				break;
			}
		}
	}
	return 1;
}
