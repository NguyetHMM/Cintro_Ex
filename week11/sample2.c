#include<stdio.h>
#include<string.h>
void printDs(char ds[100][51], int n)
{
    int i=0;
    printf("\n==================\n");
    for(i=0;i<n;i++)
       puts(ds[i]);
    printf("\n==================\n");
}

void clearbuffer()   // fflush
{
    char ch;
    //while(getchar()!='\0');
    scanf("%*c",&ch);
}
int main()
{
    char ds[100][51]; // mang xau ky tu
    char tmp[255];
    char ch;
    int n,i,j;
    do
    {
       printf("So thanh vien: ");
       scanf("%d",&n);
    }
    while(n<=0 || n>100);
    printf("Nhap ho ten:\n");
gets(tmp);
    for(i=0;i<n;i++)
    { 
        printf("Ho ten: ");
        //gets(tmp);
        //clearbuffer();
        gets(ds[i]);
    }
    printDs(ds,n);
    // sap xep
    for(i=n-1; i>=1;i--)
        for(j=1;j<=i;j++)
           if(strcmp(ds[j-1],ds[j])>0)
           {
               strcpy(tmp,ds[j]);
               strcpy(ds[j],ds[j-1]);
               strcpy(ds[j-1],tmp);  
            }
printDs(ds,n);
    return 0;
}
