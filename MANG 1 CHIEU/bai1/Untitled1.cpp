#include <stdio.h>
#define MAX 50

void NhapMang(int a[], int &n) 
{   
     int i; 
     do{  printf("Nhap so luong phan tu 1 <=n <= 50: "); 
          scanf("%d", &n);
     }while((n < 1) || ( n > 50));
     for(i = 0; i < n; i++) 
     {    printf("Phan tu thu %d: ", i);
          scanf("%d",&a[i]);
 }

}

void TimMax(int a[], int n)
{    int max = a[0];
     for (int i = 1; i < n; i++)
          if(a[i] > max)
              max = a[i];
    printf("\nMAX = %d", max);
}

void TimMin(int a[], int n)
{    int min = a[0];
     for (int i = 1; i < n; i++)
          if(a[i] < min)
              min = a[i];
    printf("\nMIN = %d", min);
}

int main() 
{   
     int a[MAX], n;
     NhapMang(a, n); 
     TimMax(a,n);
     TimMin(a,n);
     return 0;  
}
