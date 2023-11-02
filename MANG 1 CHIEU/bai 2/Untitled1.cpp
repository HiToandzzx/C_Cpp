#include <stdio.h>
#define MAX 50

void NhapMang(int a[], int &n) 
{   
     int i; 
     do{  printf("Nhap so luong phan tu 1 <=n <= 50: "); 
          scanf("%d", &n);
     }while((n < 1) || ( n > 50));
     for(i = 0; i < n; i++) 
     {    printf("Phan tu thu %d: ", i);
          scanf("%d",&a[i]);
 }
}

void TongDuong(int a[], int n){
	int sum=0;
	for (int i=0 ; i<n ; i++){
		if (a[i]>0)
			sum+=a[i];
	}
	printf("\nTong Duong = %d", sum);
	
}

int TongAm(int a[], int n){
	int sum=0;
	for (int i=0 ; i<n ; i++){
		if (a[i]<0)
			sum+=a[i];
	}
	return sum;
	
}

int main() 
{   
     int a[MAX], n, s;
     NhapMang(a, n);
	 TongDuong(a,n); 
	printf("\nTong Am = %d",TongAm(a,n)) ;
     return 0;  
}


