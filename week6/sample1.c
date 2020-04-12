#include<stdio.h>
int main()
{
    double x, tienphaitra;

    // nhap vao tong tien hang
    printf("Nhap vao tong tien hang: ");
    scanf("%lf",&x);
    /*
    if(x<5e6)//5e6 = 5000000
        tienphaitra = x;
    if(x>=5e6 && x<10e6)
        tienphaitra = x *0.97; // chiet khau 3%
    if(x>=10e6)
        tienphaitra = x - 5e5;
*/
    tienphaitra = x;
    if(x>=5e6 && x<=10e6)
 	tienphaitra = x *0.97;
    else if(x>=10e6)
        tienphaitra = x - 5e5;


    printf("Tien phai tra: %.0lf\n",tienphaitra);
   
    return 0;
}
