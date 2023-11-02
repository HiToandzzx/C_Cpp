/*Chuong trinh nhap va hien thi thong tin nhan vien */
#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>

typedef struct 
{  unsigned char ngay_thu; 
   unsigned char thang; 
   unsigned int nam; 
}ngay;

typedef struct 
{  int  maNV; 
   char  ho_ten[40];
   char  dia_chi[30];
   double  bac_luong;
   ngay  ngay_sinh;
}NhanVien;
 
/* Khai bao cac prototype */
void NhapNV(NhanVien &nv);
void InNV(NhanVien nv);
 
/* Ham main */
int main() 
{  NhanVien nv;
   printf("Nhap thong tin cua nhan vien:\n");
   NhapNV(nv);
   printf("\nThong tin cua nhan vien:\n");
   InNV(nv);
   getch();
   return 0;
}
/* Dinh nghia cac ham  */
void NhapNV(NhanVien &nv)
{  float x;
   printf("Nhap ma nhan vien: ");scanf("%d",&nv.maNV); 
   fflush(stdin);
   printf("Nhap ho ten nhan vien: ");gets(nv.ho_ten); 
   printf("Sinh ngay: ");
   scanf("%d",&nv.ngay_sinh.ngay_thu);
   printf("Thang: ");
   scanf("%d",&nv.ngay_sinh.thang);
   printf("Nam: ");
   scanf("%d",&nv.ngay_sinh.nam);
   fflush(stdin);
   printf("Dia chi: ");
   gets(nv.dia_chi);
   fflush(stdin);
   printf("Bac luong: ");
   scanf("%f",&x);
   nv.bac_luong = x;
}
void InNV(NhanVien nv) 
{  printf("Ma nhan vien: %d", nv.maNV); 
   printf("\nHo ten nhan vien: %s", nv.ho_ten);
   printf("\nNgay sinh: %d /%d /%d",nv.ngay_sinh.ngay_thu, nv.ngay_sinh.thang,nv.ngay_sinh.nam);
   printf("\nDia chi: %s", nv.dia_chi);
   printf("\nBac luong: %f", nv.bac_luong);
}
