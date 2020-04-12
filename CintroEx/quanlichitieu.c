#include <stdio.h>
#define months 12
#define money_each_month 3000000.0
void menu();
void chedochitieu();
void nhaplieu();
void bangkecanam();
void baocaothongke();
int flag,count=1;
double moneyformonth[months],tiendu[months];

int main()
{
	int choice;
do{
    	menu();
    	
    	scanf("%d",&choice);
    	switch(choice){
    		case 1: {
            chedochitieu();

    		};
    		break;
    		case 2: {
    		nhaplieu();

    		};
    		break;
            case 3:{
            bangkecanam();

            };
            break;
    		case 4:{
            baocaothongke();
    		};
    		break;
    		case 5:{
    			printf("\n\nCAM ON .\n");
    		};
    		break;
    		default: printf("Nhap sai roi!.\n");
    	}

    }while(choice!=5);
	return 0;
}
void menu(){
    printf("1.Che do chi tieu\n");
    printf("2.Nhap lieu\n");
    printf("3.Bang ke ca nam\n");
    printf("4.Bao cao thong ke\n");
    printf("5.Thoat\n");
    printf("Your choice: ");
}
void chedochitieu(){
int choice;
printf("Trong 2 lua chon : AN TOAN(1) va LINH HOAT(2)\n");
printf("Ban chon: \n");
scanf("%d",&choice);
switch(choice)
{
	case 1:{
    printf("Ban da chon : AN TOAN\n");
    flag=1;// bien co,danh giau
	};
	break;
	case 2:{
    printf("Ban da chon : LINH HOAT\n");
    flag=2;// bien co
	};
	break;
}
}
void nhaplieu(){
	double tien,sum=0;
	int i;
if(flag==1)
{
	do{
    printf("So tien chi thang %d la: ",count);
    scanf("%lf",&tien);
	}while(tien>money_each_month);
}
else if(flag==2){
	if (count==1)
	{
		do{
    printf("So tien chi thang %d la: ",count);
    scanf("%lf",&tien);
	}while(tien>money_each_month);
	}
    else
    do{
    printf("So tien chi thang %d la: ",count);
    scanf("%lf",&tien);
	}while(tien>money_each_month+tiendu[count-1]);
}
else printf("Moi ban chon che do chi tieu truoc.\n");
/*Xu li bai toan voi mang*/
moneyformonth[count]=tien;
for(i=1;i<=count;i++)
    sum+=moneyformonth[i];
tiendu[count]=money_each_month*count-sum;
count++;
sum=0;
flag=0;
}
void bangkecanam(){
	int i;
printf("%-45s%-25s\n","Tien tieu hang thang","Tien du thang" );
for(i=1;i<=months;i++)
{
	printf("%-5d%-40.2lf%-25.2lf\n",i,moneyformonth[i],tiendu[i] );
}
}
void baocaothongke(){
double min, max;
int i;
min=moneyformonth[1];
max=moneyformonth[1];
for(i=1;i<count;i++)
{
	if (moneyformonth[i]>max)
		max=moneyformonth[i];
	if (moneyformonth[i]<min)
		min=moneyformonth[i];
}
printf("Thang tieu it nhat: %.2lf\n",min );
printf("Thang tieu nhieu nhat: %.2lf\n",max );
for(i=1;i<count;i++)
{
	printf("%-4d%-25.2lf\n",i,tiendu[i] );
}
printf("So tien con lai sau 1 nam: %.2lf\n",tiendu[count-1] );//so tien du la nhu vay boi vi count tang len 1 o ham tren nen phai lay count-1
}