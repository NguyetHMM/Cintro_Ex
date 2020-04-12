#include<stdio.h>

int main()
{
    int n;
    //nhap n>0
    do
    {
	printf("nhap n(>0): ");
        scanf("%d",&n);
    }
    while(n<=0);
    
    // tinh tong
    int tmp=n,tong=0;
    while(n>0)
    {
        tong=tong+n%10;
        n=n/10;
    } 

    printf("Tong cac chu so cua so %d la %d\n",tmp,tong);

    return 0;
}
