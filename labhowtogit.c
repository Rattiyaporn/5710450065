#include <stdio.h>
int main()
{
   int a;
   int a_50;
   int a_20;
   int five;
   int one;
   printf("Enter an amount: ");
   scanf("%d",&a);
   a_50 = a/50;
   a_20 = (a-(a_50*50))/20;
   five = (a-(a_50*50)-(a_20*20))/5;
   one = (a-(a_50*50)-(a_20*20)-(five*5))/1;
   printf("1: %d",one);
   printf("\n5: %d",five);
   printf("\n20: %d",a_20);
   printf("\n50: %d",a_50);
}
