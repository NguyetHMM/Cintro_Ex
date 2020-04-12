#include <stdio.h>

int readn(int MAX)
{ 
   int n;
   do
   {
      printf("n = ");
      scanf("%d", &n);
   }
   while(n<=0 || n>MAX);
   return n;
}
void readArray(int A[], int MAX)
{
    int i;
    printf("Nhap vao mang:\n");
    for(i=0;i<MAX;i++)
    {
        printf("A[%d] = ",i+1);
        scanf("%d",&A[i]);
    }
}
void printArray(int A[], int MAX)
{
    int i;
    for(i=0;i<MAX;i++) printf("%d ",A[i]);
    printf("\n");
}
int findMax(int *A, int MAX)
{
    int i, max;
    max = A[0];
    for(i=1;i<=MAX-1;i++)
        if(max<A[i]) max = A[i];

    return max;
}
void bubblesort(int A[], int MAX)
{
   int i,j;
   for(i=MAX-1; i>0; i--)
        for(j=1; j<=i; j++)
            if(A[j-1]>A[j]) // sai vi tri --> doi cho
            { 
               int tmp =A[j];
               A[j] = A[j-1];
               A[j-1] = tmp;
            }
}

int main()
{
    const int MAX = 10;
    int A[MAX];
    int i,j,max,min,n;

    n = readn(MAX);
    // nhap vao mang
    readArray(A,n);

    // tim max    

    printf("Gia tri phan tu lon nhat: %d\n",findMax(A,n));

    // sap xep
    printf("Mang truoc khi sap xep:\n");
    printArray(A,n);

    // sap xep noi bot
    bubblesort(A,n);

    // in mang ket qua
    printf("Mang sau khi sap xep:\n");
    printArray(A,n);

    return 0;
}
