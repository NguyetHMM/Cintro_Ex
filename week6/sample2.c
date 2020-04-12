#include<stdio.h>

int main()
{
    // tim max(a,b)
    int a,b;
    printf("nhap vao 2 so: ");
    scanf("%d%d",&a,&b);

    int max = a>b?a:b;

    printf("Max = %d\n",max);

    // tim max(a,b,c)
    int c;
    printf("nhap vao 3 so: ");
    scanf("%d%d%d",&a,&b,&c);

    //max = a>b?a>c?a:c:b>c?b:c;
    if(a>b) //b<a
       if(a>c) max = a;
       else max =c;
    else // b>a
       if(b>c) max=b;
       else max = c;
 
    printf("Max = %d\n",max);
    return 0;

}
