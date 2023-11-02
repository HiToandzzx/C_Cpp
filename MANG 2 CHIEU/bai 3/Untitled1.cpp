// Chuong trinh tao ma tran so nguyen kich thuoc mxn 
#include<stdio.h> 
#define MAXD 5
#define MAXC 10

// Khai bao cac nguyen mau ham 
void NhapMaTran(int a[][MAXC], int &m, int &n);
void XuatMaTran(int a[][MAXC], int &m, int &n);
int TimMax(int a[][MAXC], int m, int n);
int TimSoDuongDauTien(int a[][MAXC], int m, int n);
int TimSoAmMax(int a[][MAXC], int m, int n);
int AmTrenCot(int a[][MAXC], int c, int n);
int TichDuongHang(int a[][MAXC], int d, int n);

// Ham main 
int main(){    
	int b[MAXD][MAXC], m, n, c, d; 
    NhapMaTran(b, m, n); 
    	printf("\nMa tran vua nhap: \n"); 
    XuatMaTran(b, m, n);
	//a 
	printf("\nGia tri lon nhat = %d", TimMax(b, m, n));
	//b
	printf("\nGia tri duong dau tien la %d", TimSoDuongDauTien(b, m, n));
	//c
	printf("\nGia tri am lon nhat = %d", TimSoAmMax(b, m, n));
	//d
	printf("\n  Nhap so cot muon tim: ");
	scanf("%d",&c);  
	printf("So phan tu am trong cot %d la %d",c,AmTrenCot(b, m, c));
	//e
	printf("\n  Nhap so dong muon tinh: ");
	scanf("%d",&d);  
	printf("Tich dong %d bang %d",d,TichDuongHang(b, d, n));
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

void XuatMaTran(int a[][MAXC], int &m, int &n){  
	for(int i=0 ; i<m ; i++){    
		for (int j=0 ; j<n ; j++)
              printf("%5d", a[i][j]);
          printf("\n");
     }
}

int TimMax(int a[][MAXC], int m, int n){    
	int max=0;
    for (int i=0 ; i<m ; i++)
        for (int j=0 ; j<n ; j++)
            if (a[i][j] > max)
                max = a[i][j];
    return max;
}

int TimSoDuongDauTien(int a[][MAXC], int m, int n){    
    for (int i=0 ; i<m ; i++)
        for (int j=0 ; j<n ; j++)
            if (a[i][j] > 0)
            	return 1;
    return 0;
}

int TimSoAmMax(int a[][MAXC], int m, int n){    
	int max=0;
    for (int i=0 ; i<m ; i++)
        for (int j=0 ; j<n ; j++)
            if (a[i][j] < max)
                max = a[i][j];
    return max;
}

int AmTrenCot(int a[][MAXC], int m, int c){  
	int dem=0;
        for (int i=0 ; i<m ; i++)
        	if(a[i][c]<0)
            	dem++;
    	return dem;
}

int TichDuongHang(int a[][MAXC], int d, int n){  
	int tich=1;
        for (int j=0 ; j<n ; j++){
        	if(a[d][j]>0)
            	tich *= a[d][j];
        }
    return tich;
}
