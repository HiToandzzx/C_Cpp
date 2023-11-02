#include <stdio.h>
#include <string.h>
#define N 50
void NhapChuoi(char s[N]);
void NhapKiTu(char &c);
void SoLanXH(char s[N], char c);


void NhapChuoi(char s[N]){
	printf("Hay nhap chuoi ky tu: ");
	gets(s);
}


void NhapKiTu(char &c){
	printf("\nHay nhap mot ki tu: ");
	scanf("%c",&c);
}

void SoLanXH(char s[N], char c){
	int dem=0;
	for (int i=0 ; i<strlen(s) ; i++)
		if (s[i]==c)
			dem++;
			printf("\n%c xuat hien %d lan",c,dem);
}


int main(){
	char s[N], c, i;
	NhapChuoi(s);
	NhapKiTu(c);
	SoLanXH(s,c);
	return 0;
}

