#include <stdio.h>
#include <string.h>
#define N 50
void NhapChuoi(char s[N]);
void Change(char s[N]);


void NhapChuoi(char s[N]){
	printf("Nhap chuoi: ");
	gets(s);
}

//Ham thay the ky tu khong phai nguyen am thanh khang trang
void Change(char s[N]){
	printf("Chuoi sau khi thay the: %c");
	for (int i=0 ; i<strlen(s) ; i++){
		if (s[i]!='a' && s[i]!='A' && s[i]!='e' && s[i]!='E' && s[i]!='i' && s[i]!='I' && s[i]!='o' && s[i]!='O' && s[i]!='u' && s[i]!='U')
			s[i]=' ';
			printf("%c",s[i]);
		}
}
int main(){
	char s[N];
	NhapChuoi(s);
	Change(s);
	
}
