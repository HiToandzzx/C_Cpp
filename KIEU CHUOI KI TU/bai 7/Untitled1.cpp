#include <stdio.h>
#include <string.h>
#define N 100
void NhapChuoi(char s[]);
char DemTu(char s[]);
void InTuDau(char s[]);
void InTuCuoi(char s[]);


void NhapChuoi(char s[]){
	printf("Nhap chuoi: ");
	gets(s);
}

char DemTu(char s[]){
	int dem=(s[0] != ' ');
	for (int i=0 ; i<(strlen(s)-1) ; i++){
		if (s[i] == ' ' && s[i+1] != ' ')
			dem++;
	}
	return dem;
}

void InTuDau(char s[]){
	printf("\nTu dau tien cua chuoi la: ");
	for (int i=0 ; i<strlen(s) ; i++){
		if (s[i] == ' ' && s[i+1] != ' ')
			break;
			printf("%c",s[i]);
	}
}


void InTuCuoi(char s[]){
	int m=0;
	for (int i=strlen(s)-1 ; i>0 ; i--)
		if (s[i]==' '){
			m=i;
			break;
		}
	printf("\nTu cuoi cung cua chuoi la: ");
	for (int i=m+1 ; i<strlen(s) ; i++)
		printf("%c",s[i]);
}


int main(){
	char s[N];
	NhapChuoi(s);
	//a
	printf("\nChuoi co %d tu",DemTu(s));
	//b
	InTuDau(s);
	//c
	InTuCuoi(s);
	return 0;
}
