#include <stdio.h>
#include <math.h>
#define MAX 50

void NhapMang(int a[], int &n) {   
    int i; 
    do{  
		printf("Nhap so luong phan tu 1 <= n <= 50: "); 
        scanf("%d", &n);
    } while((n < 1) || ( n > 50));
    for(i = 0; i < n; i++){   
		printf("Phan tu thu %d: ", i);
        scanf("%d",&a[i]);
 	}
}

//a
void DemPTuTrungX(int a[], int n, int x)
{
	int DemPTuX=0;
	for(int i=0; i<n; i++)
		if(a[i]==x)
			DemPTuX = DemPTuX + 1;
	printf("\nSo phan tu trung %d trong mang la: %d",x,DemPTuX);

}

//b
void TimPTuBangX(int a[], int n, int x){
	for(int i=0; i<n; i++)
		if(a[i]==x)
    printf("\nVi tri cua %d la %d",x,i);
}

//c
int viTricuoi(int a[],int n,int x) {
    for(int i=0; i<n; i++){
      	int vitri;
		for(int i=0;i<n;i++){
			if(a[i]==x)
			vitri=i;
		}
	return vitri;
	}
}


//d
void uocsox(int a[], int n, int x){
	for(int i=0;i<n;i++)
		if(a[i]%x==0)
			printf("\nPhan tu A[%d] co gia tri = %d la uoc so cua x", i,a[i]);
}

//e
void thaythe(int a[], int n, int x)
{	int y=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			a[i]=0;
		}	
	} 
	printf("\nMang duoc thay the la:");
	for(int i=0;i<n;i++)
		printf("\nA[%d]=%d ",i,a[i]);	 	
}

int main(){
 	int a[MAX], n,x,k;
	NhapMang(a,n);
		printf("\nNhap so nguyen x: ");
	    scanf("%d",&x);
    DemPTuTrungX(a,n,x);
    TimPTuBangX(a,n,x);
	viTricuoi(a,n,x);
		printf("\nVi tri cuoi cung cua mang la: %d",viTricuoi(a,n,x));
	uocsox(a,n,x);
	thaythe(a,n,x);
	return 0;
}
