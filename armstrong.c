#include<stdio.h>
#include<math.h>
void main()
{
  int originalNumber,number,remimder,count=0,result=0,reminder;
   printf("enter a number");
   scanf("%d",&number);
 
 originalNumber=number;
  while(originalNumber!=0)
   {
      originalNumber/=10;
      count++;
   }
 /*printf("%d digits are present",count);
 printf("%d\n",number);
 printf("%d\n",originalNumber);*/
 
 originalNumber=number;
 while(originalNumber!=0)
 {
     reminder=originalNumber/10;
     result+=pow(reminder,count);
     originalNumber/=10;
     
 }
  (result==number)?printf("%d is an Armstrong Number",number):printf("%d is Not an Armstrong number",number);
    
}
