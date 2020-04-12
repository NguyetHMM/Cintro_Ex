#include <stdio.h>
#include <string.h>

const int THANG_MAX = 3;

struct HoaDonDien
{
   char maHD[20];
   char maKH[20];
   int sokwh;
   double tien;
};

double tinhtien(int sokwh)
{
    double sum=0;
    if(sokwh<=50) sum = sokwh*750;
    else if(sokwh<=100) sum= 50*750 + (sokwh-50)*1000;
    else if(sokwh<=150) sum= 50*750 + 50*1000 + (sokwh-100)*1500;
    else sum = 50*750 + 50*1000 + 50*1500+ (sokwh-150)*2000;

    return (1 + 0.1) *sum; // 10% VAT	
}

// nhap thong tin hoa don dien trong 12 thang
void nhapthongtin(struct HoaDonDien lichsu[THANG_MAX])
{
    int i;
    char maKh[20];
    printf("Ma Kh: ");
    scanf("%s", maKh);
    
    printf("Nhap vao chi tiet hoa don %d thang\n",THANG_MAX);
    for(i=0;i<THANG_MAX;i++)
    {
        strcpy(lichsu[i].maKH, maKh);
        printf("MaHD: ");
        scanf("%s", lichsu[i].maHD);
        printf("so Kwh: ");
        scanf("%d", &lichsu[i].sokwh); 
        lichsu[i].tien = tinhtien(lichsu[i].sokwh);
    }
}

// tim va tra ve thag tieu thu nhieu dien nhat trong 12 thang
struct HoaDonDien timThangCaoDiem(struct HoaDonDien lichsu[THANG_MAX])
{
    int i, thangmax = 0;
    for(i=1;i<THANG_MAX;i++)
        if(lichsu[i].sokwh>lichsu[thangmax].sokwh)
             thangmax = i;
    return lichsu[thangmax];
}

void printThang( struct HoaDonDien thangmax)
{
    printf("\n=========================\n");
    printf("\n CHI TIET HOA DON\n");
    printf("\n=========================\n");
    printf("MaKH: %s\n", thangmax.maKH);
    printf("MaHD: %s\n", thangmax.maHD);
    printf("soKwh: %d\n", thangmax.sokwh);
    printf("Tien: %.4lf\n", thangmax.tien);
    printf("===========================\n");
}

int main()
{
    struct HoaDonDien lichsu[THANG_MAX], max;
    
    nhapthongtin(lichsu);
    max = timThangCaoDiem(lichsu);
    printThang(max);

    return 0;
}
