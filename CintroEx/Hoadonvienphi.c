#include <stdio.h>
#include <string.h>
#define phinoitru 150000 // phi noi tru 150 nghin /ngay
int main(int argc, char const *argv[])
{
	int choice,count1=0,count2=0,count3=0;
	char ten[30];
	int songay,sobenhnhan;
	unsigned int tienthuoc,tienphauthuat=0,tongtien,Sum=0,tienloi,max ;
	char loaithe,hoi;
	do{
    	printf("hospital fee program: \n");
    	printf("1.Input data/Bill for new patient. \n");
    	printf("2.Total report\n");
    	printf("3.Quit\n");
    	printf("Your choice: ");
    	scanf("%d%*c",&choice);
    	fflush(stdin);
    	switch(choice){
    		
    		case 1:{
    			int i;
    printf("So luong benh nhan: \n");
    scanf("%d%*c",&sobenhnhan);
    for (i=1;i<=sobenhnhan;i++)
    {
    printf("Benh nhan thu %d\n",i );
    printf("Nhap vao so ngay nam vien: \n");
    scanf("%d",&songay);
    printf("Tien thuoc: \n");
    scanf("%d%*c",&tienthuoc);
    printf("Co phai phau thuoc ko? \n");
    hoi=getchar();  // hoi se co hai gia tri:   y:yes ; n:no;
    if (hoi =='y' || hoi=='Y')
    	{
    		printf("Nhap vao so tien phau thuat: \n");
            scanf("%d%*c",&tienphauthuat);
        };
    tongtien= (songay*phinoitru+tienthuoc+tienphauthuat);
 
    do{
    printf("Loai the dang dung: \n");
    fflush(stdin);
    scanf("%c",&loaithe);
    }while(loaithe != 'G' && loaithe !='g' && loaithe != 'S' && loaithe !='s' && loaithe != 'C' && loaithe !='c');
    if (loaithe == 'G' || loaithe =='g')
    	{
            printf("-----------------------------------------------------------------------------------------\n\n");
    		printf("Hoa don vien phi:\n");
    		
    		printf("So ngay nam vien: %d\n",songay );
    		printf("Tienthuoc: %d\n",tienthuoc );
    		printf("Co phai phau thua hay ko? %c\n",hoi );
    		printf("Tien phauthuat: %d\n",tienphauthuat );
    		tongtien = tongtien*0.3;
    		tienloi= tongtien/0.3*0.7;
    		printf("So tien phai thanh toan: (%d x %d + %d + %d)x0.3= %d VND\n\n",songay,phinoitru,tienthuoc,tienphauthuat,tongtien );
    		count1++;
    		Sum=Sum+tongtien;
    		max=tienloi;
    	if (tienloi >=max)
    		max=tienloi;
    	};
    if (loaithe == 'S' || loaithe =='s')
    	{
            printf("-----------------------------------------------------------------------------------------\n\n");
    		printf("Hoa don vien phi:\n");
    		
    		printf("So ngay nam vien: %d\n",songay );
    		printf("Tienthuoc: %d\n",tienthuoc );
    		printf("Co phai phau thua hay ko? %c\n",hoi );
    		printf("Tien phauthuat: %d\n",tienphauthuat );
    		tongtien = tongtien*0.5;
    		tienloi= tongtien/0.5*0.5;
    		printf("So tien phai thanh toan: (%d x %d + %d + %d)x0.5= %d VND\n\n",songay,phinoitru,tienthuoc,tienphauthuat,tongtien );
    		count2++;
    		Sum=Sum+tongtien;
    	    max=tienloi;
    	if (tienloi >=max)
    		max=tienloi;
    	};
    if (loaithe == 'C' || loaithe =='c')
    	{
            printf("------------------------------------------------------------------------------------------\n\n");
    		printf("Hoa don vien phi:\n");
    		
    		printf("So ngay nam vien: %d\n",songay );
    		printf("Tienthuoc: %d\n",tienthuoc );
    		printf("Co phai phau thua hay ko? %c\n",hoi );
    		printf("Tien phauthuat: %d\n",tienphauthuat );
    		tongtien = tongtien*0.7;
    		tienloi= tongtien/0.7*0.3;
    		printf("So tien phai thanh toan: (%d x %d + %d + %d)x0.7= %d VND\n\n",songay,phinoitru,tienthuoc,tienphauthuat,tongtien );
    		count3++;
    		Sum=Sum+tongtien;
    		max=tienloi;
    	if (tienloi >=max)
    		max=tienloi;
    	};
    	
    };
    
    		};
    		break;
    		case 2:{
            printf("So luong benh nhan la: %d\n",sobenhnhan );
            printf("Trung binh moi benh nhan tra: %.2f\n",(float)Sum/sobenhnhan );
            printf("So the Gold: %d\n",count1 );
            printf("So the Silver: %d\n",count2 );
            printf("So the Citizen: %d\n",count3 );
            printf("So tien huong loi nhieu nhat: %d\n",max );
    		};
    		break;
    		
    		case 3:{
    			printf("\n\nCAM ON QUY KHACH DA SU DUNG DICH VU.\n");
    		}
    		break;
    		default: printf("Nhap cac so tu 1 den 3.\n");
    	}

    }while(choice!=3);
	return 0;
}