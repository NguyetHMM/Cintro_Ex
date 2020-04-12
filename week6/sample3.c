#include<stdio.h>

int main()
{
    int tuoi;
    printf("Nhap tuoi:");
    scanf("%d",&tuoi);
    if(tuoi<0 || tuoi >100) printf("khong hop le!");
    else if(tuoi<=2) printf("mau giao");
    else if(tuoi<=5) printf("mam non"); 
    else if(tuoi<=10) printf("cap 1"); 
    else if(tuoi<=15) printf("cap 2"); 
    else if(tuoi<=18) printf("cap 3"); 
    else if(tuoi<=24) printf("dai hoc"); 
    else printf("truong doi");

    return 0;
} 

