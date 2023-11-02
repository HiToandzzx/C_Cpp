#include <stdio.h>
#include <string.h>
#define N 50
void Nhapchuoi(char s[N]);
void xoakhoangtrang(char s[N]);

void Nhapchuoi(char s[N]){
	printf("Nhap chuoi: ");
	gets(s);
}

void xoakhoangtrang(char s[N]){
	for (int i=0 ; i<strlen(s) ; i++)
		if(s[i]==' '){
			for (int j=i ; j<strlen(s) ; j++)
			s[j] = s[j+1];
				i--;
		}	
	printf("\nChuoi sau khi xoa khoan trang la: %s",s);
}

int main(){
	char s[N];
	Nhapchuoi(s);
	xoakhoangtrang(s);
	return 0;
}
