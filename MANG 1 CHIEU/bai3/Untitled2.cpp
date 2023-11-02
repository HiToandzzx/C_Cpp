#include <stdio.h>
#include <math.h>
#define MAX 50

void NhapMang(int a[], int &n) 
{   
    int i; 
    do{  printf("Nhap so luong phan tu 1 <=n <= 50: "); 
        scanf("%d", &n);
    }while((n < 1) || ( n > 50));
    for(i = 0; i < n; i++) 
    {   printf("Phan tu thu %d: ", i);
        scanf("%d",&a[i]);
 }
}
//a
void DemChan(int a[], int n){
	int dem=0;
	for (int i=0 ; i<n ; i++)
		if (a[i]%2==0)
			dem = dem +1;
			printf("\nSo phan tu chan trong mang: %d",dem);
}
//b
int TongLe(int a[], int n){
	int sum=0;
	for (int i=0 ; i<n ; i++)
		if (a[i]%2==1)
			sum+= a[i];
			printf("\nTong phan tu le trong mang: %d",sum);
}

//c
float TBC(int a[], int n){
	float tbc=0, sum=0;
	for (int i=0 ; i<n ; i++)
		sum += a[i];
			tbc = float(sum)/n;
	return tbc;
}

//d
void caud(int a[], int n){
	int dem=0;
	for (int i=0 ; i<n ; i++)
		if(a[i]%4==0 && a[i] % 5 != 0)
		dem++;
		printf("\nSo phan tu chia het cho 4 nhung khong chia het cho 5: %d ",dem);
}

//e
int KTSoNguyenTo(int n) {
    if (n < 2)
        return 0;

    for (int i = 2; i <= sqrt((float)n); i ++) {
        if (n%i==0) {
            return 0;
        }
    }
    return 1;
}
int tongnt(int a[],int n) {
    int tong=0;
    for(int i=0; i<n; i++) {
        if(KTSoNguyenTo(a[i])==1) {
            tong+=a[i];
        }
    }
    return tong;
}

int main() 
{   
    int a[MAX], n, s;
    NhapMang(a, n);
    DemChan(a,n);
    TongLe(a,n);  
    printf("\nTBC = %.2f",TBC(a,n));
    caud(a,n);
    printf("\nTong cac so nguyen to trong mang la %d",tongnt(a,n));
    return 0;  
}
