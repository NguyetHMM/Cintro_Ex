#include <stdio.h>

int main ()
{
   // test in so nguyen
   printf("|%d|\n",123);
   printf("|%5d|\n",123);
   printf("|%-5d|\n",123);
   printf("|%5d|\n",123456789);
   printf("|%-5d|\n",123456789);	
   int a = 123;
   long b = 1234l;
   printf("a=%d, b=%d\n",a,b);
   return 0;
}
