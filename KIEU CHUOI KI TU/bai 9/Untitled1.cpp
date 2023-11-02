#include <stdio.h>
#include <string.h>
#define N 100

void NhapChuoi1(char s1[]);
void NhapChuoi2(char s2[]);
void KTChuoiCon(char s1[], char s2[]);

void NhapChuoi1(char s1[]){
	printf("Nhap chuoi thu nhat: ");
	gets(s1);
}

void NhapChuoi2(char s2[]){
	printf("Nhap chuoi thu hai: ");
	gets(s2);
}

void KTChuoiCon(char s1[], char s2[]){
	if (strstr(s1, s2) == NULL)
		printf("Chuoi \"%s\" co trong chuoi \"%s\"", s1, s2);
	else 
		printf("Khong tim thay chuoi \"%s\" trong chuoi \"%s\"", s1, s2);
}

int main(){
	char s1[N], s2[N];
	NhapChuoi1(s1);
	NhapChuoi2(s2);
	KTChuoiCon(s1, s2);
	return 0;
}
