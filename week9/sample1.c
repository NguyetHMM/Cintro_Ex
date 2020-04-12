#include<stdio.h>

float tinhdiem(float giuaky, float thuchanh, float cuoiky)
{
   return 0.3*giuaky + 0.3*thuchanh + 0.4*cuoiky;
}

void indiemchu(float diemso)
{
   if(diemso<0 || diemso>10) printf("Invalid");
   else if(diemso<4) printf("F");
   else if(diemso<5) printf("D");
   else if(diemso<5.5) printf("D+");
   else if(diemso<=6.5) printf("C");
   else if(diemso<7) printf("C+");
   else if(diemso<8) printf("B");
   else if(diemso<8.5) printf("B+");
   else if(diemso<9.5) printf("A");
   else printf("A+");
   printf("\n");
}

void tinhvaphanloaidiem(float giuaky, float thuchanh, float cuoiky)
{
    float diemso = tinhdiem(giuaky,thuchanh,cuoiky);
    printf("%.2f ",diemso);
    indiemchu(diemso);
}

int main()
{
   float giuaky,thuchanh,cuoiky;
   printf("Nhap vao 3 diem giuaky,thuchanh,cuoiky: ");
   scanf("%f%f%f",&giuaky,&thuchanh,&cuoiky);
   tinhvaphanloaidiem(giuaky,thuchanh,cuoiky);
   return 0;
}
