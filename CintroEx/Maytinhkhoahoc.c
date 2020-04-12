#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	char choice;
	double n,exp;
	
   
    do{
    	printf("MAY TINH KHOA HOC: \n");
    	printf("N.NHAP LIEU\n");
    	printf("S.SIN\n");
    	printf("E.E MU X\n");
    	printf("T.THOAT\n");
    	printf("Your choice: ");
    	
    	scanf("%c%*c",&choice);
    	switch(choice){
    		case 'N': case 'n':  {
            do{
            printf("Nhap vao so thuc duong: ");
            scanf("%lf",&n);
            }while(n<=0);
            do{
            printf("Nhap vao sai so: ");
            scanf("%lf%*c",&exp);
            }while(exp<=0);
            
    		};
    		break;
    		case 'S':case 's': {
    		double s,a,kq,T;
            int i;
            i=3;
            a=n*3.14/180;
            s=a;
            T=a;
            do{
            	kq=s;
            	T=T*a*a*(-1)/((i-1)*i);
            	s+=T;
            	i++;
                
            }while(fabs(s-kq)>exp);
            printf("\nKet qua: %lf\n\n",s );
    		};
    		break;
    	
    		case 'E':case 'e':{
            double xn,kq,t;
            int i;
            xn=n+1;
            i=1;
            t=n;
            do{
            kq=xn;
            t=t*n/(i+1);
            xn+=t;
            i++;
            }while(fabs(xn-kq)>exp);
            printf("\nKet qua: %lf\n\n",xn );
    		};
    		break;
    		case 'T':case 't':{
    			printf("\n\nCAM ON QUY KHACH.\n");
    		}
    		break;
    		default: printf("Nhap sai roi!.\n");
    	}

    }while(choice!='T'&& choice!='t' );
	return 0;
}