#include <stdio.h>
#include <math.h>

void Nhapso(int &n){
	do{
		printf("Nhap vao so nguyen duong n: ");
		scanf("%d",&n);
	}while (n<0 || n<2);
}
// CAU A)
int KiemTraSoCP(int n){
	int f=0;
	for (int i=0 ; i<=n ; i++)
		if (pow(i,2)==n){
			f=1;
			break;
		}
		return f;
}
// CAU B)
int KiemTraSoNT(int n){
	int t=0;
	for (int i=2 ; i<=sqrt(n) ; i++)
		if(n%i==0)
			t++;
	return t;
}
// CAU C)
bool KiemTraSoHH(int n){
    int sum = 0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0) 
            sum+=i;
    }
    if(sum==n) 
		return true;
    return false;
}
	
int main(){
	int n,k,l,m;
	Nhapso(n);
	//Chay so CP
	k = KiemTraSoCP(n);
	if (k==1)
		printf("\nSo %d la so chinh phuong!",n);
	else 
		printf("\nSo %d khong la so chinh phuong!",n);
	// Chay so NT
	l = KiemTraSoNT(n);	
	if (l==0)
		printf("\nSo %d la so nguyen to!",n);
	else 
		printf("\nSo %d khong la so nguyen to!",n);
	// Chay so HH
	m = KiemTraSoHH(n);
	if(m)
        printf("\nSo %d la so hoan hao!",n);
    else
        printf("\nSo %d khong la so hoan hao!",n);
	return 0;
}
