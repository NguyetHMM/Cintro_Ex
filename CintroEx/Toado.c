#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	float x1,y1,x2,y2,x2_moi,y2_moi;
	float kc;
	/*Nhap toa do cua hai ban*/
	printf("Nhap vao toa do cua John: ");
	scanf("%f%*c%f",&x1,&y1);
	printf("Nhap vao toa do cua Jane: ");
	scanf("%f%*c%f",&x2,&y2);
	/*Tinh khoang ccach cua hai ban*/
	kc = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	printf("Khoang cach la %.2f \n\n",kc);
	/*Tim huong di cua ban John*/	
	x2=-x1+x2;
	y2=-y1+y2;
	if (x2>0 && y2>0) 
	   printf("John di theo huong Dong Bac \n");
	if (x2>0 && y2<0)
	   printf("John di theo huong Dong Nam \n");
	if (x2<0 && y2>0) 
	   printf("John di theo huong Tay Bac \n");
	if (x2<0 && y2<0)
	   printf("John di theo huong Tay Nam \n");
	if (x2==0 && y2>0) 
	   printf("John di theo huong Bac \n");
	if (x2==0 && y2<0)
	   printf("John di theo huong Nam \n");
	if (x2>0 && y2==0) 
	   printf("John di theo huong Dong \n");
	if (x2<0 && y2==0)
	   printf("John di theo huong Tay \n");
	if (x2==0 && y2==0)
	   printf("Hai ban cung toa do \n");
	return 0;
}
