#include <stdio.h>
#include <string.h>
#define N 50

void NhapChuoi(char s[N]);
void InKiTuMotDong(char s[N]);
int DemKTSo(char s[N]);
void DemNguyenAm(char s[N]);

void NhapChuoi(char s[N]){
	printf("Hay nhap chuoi: ");
	gets(s);
}

void InKiTuMotDong(char s[N]){
	for (int i=0 ; i<strlen(s) ; i++)
		printf("%c\n",s[i]);
}

int DemKTSo(char s[N]){
	int dem=0;
	for (int i=0 ; i<strlen(s) ; i++){
		if (s[i]>=48 && s[i]<=57)
			dem++;
	}
	return dem;
}
void DemNguyenAm(char s[N]){
	int dem=0;
	for(int i=0 ; i<strlen(s) ; i++){   
		switch(s[i]){  
			case  'a': case 'i': case 'e': case 'o': case 'u': 
	        case  'A': case 'I': case  'E': case  'O': case  'U': 
	        	dem++;
		}	
	}
	printf("\nSo ki tu khong phai nguyen am = %d",strlen(s)-dem);
}

int main(){
	char s[N];
	NhapChuoi(s);
	//a
	InKiTuMotDong(s);
	//b
	printf("So ki tu chu so trong chuoi = %d",DemKTSo(s));
	//c
	DemNguyenAm(s);
	return 0;
}
