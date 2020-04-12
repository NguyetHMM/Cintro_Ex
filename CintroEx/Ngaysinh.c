#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
	int age,a;
        char tenphim[30];
	printf("Nhap vao tuoi cua ban: ");
	scanf("%d%*c",&age);
	if (age <18) 
	{
	//printf("Child \n"); 
	a=0;
    }
	else if(age<65) 
	       {
			// printf("Adult \n"); 
	         a=1;
	     }
	    else  {
		//printf("Senior Citizen \n");
        a=2;
	};
	//printf("%d",a);
        printf("Ten phim: ");
	scanf("%[^\n]%*c",tenphim);
	
	float price;
	char ngay;
	printf("Nhap vao ngay di xem phim: ");
        
	scanf("%c",&ngay);
	
	switch(ngay){
	 case '2': case '3': case '4': case '5': case '6': price = 7.0;
		break;
	 case'c':price =10.0;
	    break;
	};
        
	
	if(a==0) price=price *0.5;
	    else if(a==2) price =price *0.7;
	            else price= price;
        printf("\n\n");
	printf("Bill :\n");
	printf("Movie: %s\n",tenphim);
	if (a==0) printf("Class:Child\n");
	   else if(a==1) printf("Class:Adult\n");
	        else printf("Class:Senior Citizen\n");
	switch(ngay){
	 case '2': case '3': case '4': case '5': case '6': printf("Ngay trong tuan \n");
		break;
	 case'c':printf("Ngay cuoi tuan \n");
	    break;
	};
	printf("Price: %.2f $\n",price);
	return 0;
	
}
