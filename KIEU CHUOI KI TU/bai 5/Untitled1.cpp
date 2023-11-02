#include <stdio.h>
#include <string.h>
#define N 50

void Nhapchuoi(char s[N]);
char KTDoiXung(char s[N]);

void Nhapchuoi(char s[N]){
	printf("Nhap chuoi: ");
	gets(s);
}

char KTDoiXung(char s[N]){
	for (int i=0 ; i<strlen(s) ; i++){
		if (s[i] != s[strlen(s)-i-1])
			return 0;
	}
		return 1;
}

int main(){
	char s[N];
	Nhapchuoi(s);
	
	if(KTDoiXung(s)==1)
		printf("\nChuoi doi xung!");
	if(KTDoiXung(s)==0)
		printf("\nChuoi khong doi xung!");
	return 0;
}
