#include <stdio.h>

int main ()
{
   // test in so thuc
   printf("|%f|\n",123.45);
   printf("|%8.3f|\n",12345.6789);
   printf("|%-8.3f|\n",123.123456);
   printf("|%0.2f|\n",1234.56789);
   printf("|%-.2f|\n",1234.56789);	
   printf("===================\n");	
   printf("|%e|\n",12345.6789);
   printf("|%e|\n",12345.612121212121789);
   printf("|%e|\n",0.0000000000006789);
   printf("===================\n");
   printf("|%g|\n",123.6789);
   printf("|%g|\n",123421212125.612121212121789);
   printf("===================\n");
   float a= 11/9.0;
   printf("|%f|\n",a*9);
   printf("===================\n");
   double x = 12345678901234567890.3465465446456;
   printf("|%f|\n",x);
   printf("|%lf|\n",x);
   printf("===================\n");
   long double y = 12345678901234567890.3465465446456;
   printf("|%f|\n",y);
   printf("|%llf|\n",y);
return 0;
}
