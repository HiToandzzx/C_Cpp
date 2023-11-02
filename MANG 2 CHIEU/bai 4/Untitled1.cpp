// Chuong trinh tao ma tran so nguyen kich thuoc mxn 
#include<stdio.h> 
#define MAXD 5
#define MAXC 10
void NhapMaTran(int a[][MAXC], int &m, int &n);
void XuatMaTran(int a[][MAXC], int m, int n);
int TichGTLe(int a[][MAXC], int m, int n);

int KTSoChan(int a[][MAXC], int m, int n, int c);
void TichChanTrenCot(int a[][MAXC], int m, int n, int c);
//int KTraSHH(int a[][MAXC], int m, int n);
//int TongSHH(int a[][MAXC], int m, int n);


int main(){
	int a[MAXD][MAXC], m, n, c;
	NhapMaTran(a, m, n);
		printf("\nMa tran vua nhap: \n");
	XuatMaTran(a, m, n);
	//
	printf("\nTich cac gia tri le = %d", TichGTLe(a, m, n));
	//
		printf("\nNhap so cot muon tinh tich so chan: ");
		scanf("%d",&c);
		TichChanTrenCot(a,m,n,c);
	//
			//printf("\nTong cac so hoan hao = %d",TongSHH(a,m,n));

}

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

int TichGTLe(int a[][MAXC], int m, int n){
	int tich=1;
	 	for (int i=0 ; i<m ; i++)
        	for (int j=0 ; j<n ; j++)
        		if (a[i][j]%2 != 0)
        			tich*=a[i][j];
    return tich;
}

int KTSoChan(int a[][MAXC], int m, int n, int c){
	for (int i=0 ; i<m ; i++ )
		if (a[i][c]%2==0)
			return 1;
	return 0;
}
void TichChanTrenCot(int a[][MAXC], int m, int n, int c)
{
	int tich=1;	
	if (KTSoChan(a,m,n,c)==1)
	{
		for (int i=0 ; i<m ; i++ )
		{
				if (a[i][c]>0)
					tich*=a[i][c];
		}
		printf("\nTich cac so chan = %d",tich);
	}
	else 
		printf("\nCot %d khong co so chan!", c);
}

/*
int KTraSHH(int x){
    int Tong = 0;
    for (int i=1 ; i<x ; i++){
    
        	if (x % i == 0)
            Tong += i;
    }
    if(Tong == x)
        return 1;
    return 0;
}
int TongSHH(int a[][MAXC], int m, int n){
    int Tong = 0;
    for(int i=0 ; i<m ; i++){
    	for (int j=0 ; j<n ; j++)
        if(KTraSHH(x) == 1)
            Tong += a[i][j];        
    return Tong;
}
*/
