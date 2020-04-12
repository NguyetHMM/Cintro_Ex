#include<stdio.h>

int main()
{
    double tiengui, laisuatnam,laisuatthang;
    int thoigian;
    printf("Nhap vao so tien gui: ");
    scanf("%lf",&tiengui);
     
    printf("Nhap vao lai suat gui: ");
    scanf("%lf",&laisuatnam);

    printf("Nhap vao thoi han gui: ");
    scanf("%d",&thoigian);

    laisuatthang = laisuatnam/12;
    for(int i=1; i<=thoigian; i++)
    {
        printf("Tien lai thang %d:%.2lf, tong tien thang %d:%.2lf\n",
             i,tiengui*laisuatthang,i, tiengui*(1+laisuatthang));
        
          tiengui = tiengui*(1+laisuatthang);
    } 
    return 0;
}
