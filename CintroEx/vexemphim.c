#include <stdio.h>
int main()
{
  int t,gia;
  char ten[50],s1[20],date[7];
  float x;
  printf("Nhap ten phim: ");
  fgets(ten,50,stdin);
  printf("Tuoi cua khach hang: ");
  scanf("%d",&t);
  if (t<18) {s1[20]="Child";}
  else if (t>=18 && t<65) {s1[20]="Senior";}
  else {s1[20]="Aduld";}
  printf("Ngay xem phim ( Weekend or Mon, Tue,...)la: ");
  scanf("%*c%s",&date);
  if (date[0]=='W') {gia=10;}
  else {gia=7;}
  if (s1[0]=='C') x=gia*0.5;
  else if (s1[0]=='S') x=gia*0.7;
  else x=gia;
  printf("Ve xem phim\n");
  printf("Movie: %s",ten);
  printf("Class: %s\n",s1);
  printf("Date: %s\n",date);
  printf("Price: %.2f\n",x);
  return 0;
  

   
}
