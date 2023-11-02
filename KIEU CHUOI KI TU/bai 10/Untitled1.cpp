#include <stdio.h>
#include <string.h>
#define N 100
void NhapChuoi(char s[]);
int KTSo(char s[]);
void InSo(char s[]);

int main(){
	char s[N];
	NhapChuoi(s);
		if(KTSo(s)==1){
			printf("\nChuoi co ky tu so!");
		}
		else 
			printf("\nChuoi khong co ky tu so!");
	InSo(s);
	//printf("\nCac ky tu chu so la: %c ", InSo(s));
	return 0;
}

void NhapChuoi(char s[]){
	printf("Nhap chuoi: ");
	gets(s);
}

int KTSo(char s[]){
	int dem=0;
	for (int i=0 ; i<strlen(s) ; i++){
		if (s[i]>=48 && s[i]<=57)
			dem=1;
	}
	return dem;
}

void InSo(char s[]){
	printf("\n\nVa cac ki tu chu so do la: ");
	for (int i=0 ; i<strlen(s) ; i++)
		if (s[i]>=48 && s[i]<=57)
			printf("%c  ",s[i]);

}
