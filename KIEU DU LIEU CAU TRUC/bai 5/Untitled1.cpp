#include<stdio.h>
#include<conio.h>
#include<math.h>

//Nhap toa do x, y cua tam giac 
struct Diem
{
    float x;
    float y;
};
typedef struct Diem DIEM;
void NhapDiem(DIEM &);
void XuatDiem(DIEM);
float TinhKC2Diem(DIEM , DIEM);

void NhapDiem(DIEM &a)
{
    printf("\nNhap x: ");
    scanf("%f", &a.x);

    printf("Nhap y: ");
    scanf("%f", &a.y);
}

void XuatDiem(DIEM a)
{
    printf("(%.2f, %.2f)", a.x, a.y);
}

float TinhKC2Diem(DIEM a, DIEM b)
{
    return sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
}

//struct goi ham DIEM tinh DT, CV tam giac
struct TamGiac 
{
    DIEM A;
    DIEM B;
    DIEM C;
};
typedef struct TamGiac TAMGIAC;
void NhapTamGiac(TAMGIAC &);
void XuatTamGiac(TAMGIAC);
bool KTTamGiac(TAMGIAC);
float TinhCV(TAMGIAC);
float TinhDT(TAMGIAC);

bool KTTamGiac(TAMGIAC a)
{
    float AB = TinhKC2Diem(a.A, a.B);
    float BC = TinhKC2Diem(a.B, a.C);
    float AC = TinhKC2Diem(a.A, a.C);

    if(AB + BC <= AC || AB + AC <= BC || AC + BC <= AB)
        return false;
    return true;
}

void NhapTamGiac(TAMGIAC &a)
{
    int Check;
    do{
        printf("\nNhap toa do dinh A: ");
        NhapDiem(a.A);

        printf("\nNhap toa do dinh B: ");
        NhapDiem(a.B);

        printf("\nNhap toa do dinh C: ");
        NhapDiem(a.C);
        
        Check = KTTamGiac(a);
        if(Check == false)
            printf("\n3 diem khong tao thanh tam giac!");

    }while(Check == false);
}

void XuatTamGiac(TAMGIAC a)
{
    printf("\nToa do tam giac ABC la: ( (%.2f, %.2f), (%.2f, %.2f), (%.2f, %.2f) )", a.A.x, a.A.y, a.B.x, a.B.y, a.C.x, a.C.y);
}

float TinhCV(TAMGIAC a)
{
    float AB = TinhKC2Diem(a.A, a.B);
    float BC = TinhKC2Diem(a.B, a.C);
    float AC = TinhKC2Diem(a.A, a.C);

    return AB + BC + AC;
}

float TinhDT(TAMGIAC a)
{
    float AB = TinhKC2Diem(a.A, a.B);
    float BC = TinhKC2Diem(a.B, a.C);
    float AC = TinhKC2Diem(a.A, a.C);
    float P = TinhCV(a) / 2;

    return sqrt(P * (P - AB) * (P - AC) * (P - BC));
}

int main()
{
    TAMGIAC a;

    NhapTamGiac(a);
    XuatTamGiac(a);

    float ChuVi = TinhCV(a);
    float DienTich = TinhDT(a);
    printf("\nChu vi tam giac = %.2f", ChuVi);
    printf("\nDien tich tam giac = %.2f", DienTich);
    return 0;
}
