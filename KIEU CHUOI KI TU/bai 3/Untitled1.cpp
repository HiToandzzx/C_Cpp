#include <stdio.h>
#include <string.h>
#define N 50
void NhapChuoi(char s[N]);
void DaoNguocChuoi(char s[N]);

void NhapChuoi(char s[N]){
	printf("Nhap chuoi: ");
	gets(s);
}

void DaoNguocChuoi(char s[N]){
	printf("\nChuoi sau khi dao nguoc la: %c");
	for (int i=strlen(s)-1 ; i>=0 ; i--)
		printf("%c",s[i]);
}


int main(){
	char s[N];
	NhapChuoi(s);
	DaoNguocChuoi(s);
	return 0;
	
}
