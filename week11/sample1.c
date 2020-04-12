#include<stdio.h>
#include<string.h>
int main()
{
    char hoten[51];
    printf("Nhap vao ho ten: ");
    gets(hoten);
    char ten[51];
    if(strchr(hoten,' ')<0) // cho co ten
        strcpy(ten, hoten);
    else // tach ten o cuoi
    {
        //tim vi tri cach trong cuoi cung
        int pos=-1,i,j=0;
        for(i=strlen(hoten)-1;i>=0;i--)
            if(hoten[i]==' ') break;
        pos = i;
        for(i=pos+1; i<strlen(hoten);i++)
        {
           ten[j] = hoten[i];
           j++;
        }
        ten[j]='\0';
    }
    printf("Xin chao %s\n",ten);
    return 0;
}
