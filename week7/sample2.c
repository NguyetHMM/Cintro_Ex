#include<stdio.h>
int main()
{
    double tongtien, giatien;
    int soluong,tongsoluong=0,sosp=0;

    tongtien=0;
    do
    {
        printf("Nhap vao gia san pham tiep(<0 de dung): ");
        scanf("%lf",&giatien);
        if(giatien>=0)
        {
            printf("So luong san pham: ");
            scanf("%d",&soluong);
            tongtien = tongtien + giatien*soluong;
            tongsoluong=tongsoluong+soluong;
            sosp = sosp +1;
        }
    }
    while(giatien>=0);
    printf("Gio hang gom %d mat hang voi tong %d san pham\n",sosp, tongsoluong);
    printf("Tong tien cua cac san pham: %.4lf\n",tongtien);
    return 0;
}
