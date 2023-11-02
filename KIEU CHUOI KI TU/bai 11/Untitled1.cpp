#include<stdio.h>
#include<string.h>
#define N 100

void NhapChuoi(char s[]);
void XoaKiTu(char s[], char kt);

int main(){
	char s[N], kt;
	NhapChuoi(s);
	printf("Nhap ki tu muon xoa: ");
	scanf("%c",&kt);
	printf("Chuoi sau khi xoa ki tu \"%c\" la \"%s\"", kt, XoaKiTu(s,kt) );

}

void NhapChuoi(char s[]){
	printf("Nhap chuoi: ");
	gets(s);
}

int XoaKiTu(char s[], char kt){
	int dem=0;
	int n=strlen(s);
	for (int i=0 ; i<n ; i++)
		if (s[i] == kt){
			for(int j=i ; j<n ; j++)
				s[j]=s[j+1];
				i--;
				n--;
			}
printf("Chuoi sau khi xoa ki tu %c la: %s", kt, s);
}

