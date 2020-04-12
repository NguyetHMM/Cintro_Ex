#include <stdio.h>

int main()
{
    int sothang;
    double tilebandau, laisuat, tienhang;
    // nhap vao gia tri ban dau
    printf("Nhap vao tien san pham:");
    scanf("%lf",&tienhang);
    printf("Ti le tra ban dau(0.10,0.20,0.50): ");
    scanf("%lf",&tilebandau);
    printf("Lai suat khoan vay theo thang: ");
    scanf("%lf",&laisuat);
    printf("Thoi gian khoan vay (6,12,24 thang): ");
    scanf("%d",&sothang);

    /*
    printf("Tien tra ban dau: %.2lf\n", tienhang*tilebandau);
    printf("Tien tra hang thang trong %d thang la: %lf",
               sothang, tienhang*(1-tilebandau)/sothang + 
                           tienhang*(1-tilebandau)*laisuat);
    */
    double tratruoc,trahangthang,tongcong;
    tratruoc = tienhang*tilebandau;
    trahangthang =  tienhang*(1-tilebandau)/sothang + 
                           tienhang*(1-tilebandau)*laisuat;

    tongcong = tratruoc + trahangthang*sothang;
    printf("Tien tra ban dau: %.2lf\n", tratruoc);
    printf("Tien tra hang thang trong %d thang la: %.2lf\n",
                 sothang,trahangthang);
    printf("Tien tong cong phai tra: %.2lf\n",tongcong);
    
    return 0;
}
