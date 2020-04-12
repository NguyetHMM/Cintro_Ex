#include <stdio.h>
#include <math.h>
int ngto(int n){
	int i,a;
	a=1;
	if (n==2 || n==3) 
		a=1;
	else
		if(n>3)
		{
			for (i=2;i<=sqrt(n);i++){
				if(n%i==0)
					{
						a=0;
                        break;
					};
			};
		};
	return a;	

}
int main(int argc, char const *argv[])
{
	/*So hoan hao*/

	int n,choice;
	do{
    	printf("EXERCISE 7.10: \n");
    	printf("1.Nhap vao N \n");
    	printf("2.Liet ke cac so hoan hao tu 1 den N\n");
    	printf("3.Liet ke cac so nguyen to tu 1 den N\n");
    	printf("4.Liet ke cac uoc so cua N\n");
    	printf("5.Thoat\n");
    	printf("Your choice: ");
    	scanf("%d",&choice);
    	switch(choice){
    		case 1: {
    			do{
    				printf("Nhap vao so n: ");
                    scanf("%d",&n);
    			}while(n<=0);
    		};
    		break;
    		case 2:{
    			int a,i,j,count;
    			a=0;
    			count=0;
            for (i=1;i<=n;i++)
            {
            	for (j=1;j<i;j++)
            	{
            		if (i%j==0)
            			a+=j;
                };
                if (a==i)
                {
                    printf("%d ",i );
                    count++;
                    if (count==10) {
                    	printf("\n");
                    	count=0;
                    };

                };
                a=0;
            
            };
            printf("\n");
    		};
    		break;
    		case 3:{
    			int i,count;
    			count=0;
    			for (i=2;i<=n;i++)
    			{
    				if(ngto(i)==1) 
    					{
    						printf("%-5d",i );
                            count ++;
                            if(count==10)
                            {
                            	printf("\n");
                            	count=0;
                            };
    					};
    			};
    			printf("\n");
    		};
    		break;
    		case 4:{
    			int i,count=0;
            for (i=1;i<n;i++)
            {
            	if(n%i==0)
            	{
            		printf("%-5d",i );
            		count++;
            	};
            	if(count ==10)
            	{
            		printf("\n");
            		count=0;
            	}
            };
            printf("\n");
    		};
    		break;
    		case 5:{
    			printf("\n\nCAM ON QUY KHACH DA SU DUNG DICH VU.\n");
    		}
    		break;
    		default: printf("Nhap cac so tu 1 den 5.\n");
    	}

    }while(choice!=5);
	int i;
	return 0;
}