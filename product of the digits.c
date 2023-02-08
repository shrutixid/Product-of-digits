#include<stdio.h>
void main()
{
printf("The following program is to find the product of all the digits of the number:-\n\n");
int num,pro=1,x;
printf("Enter a number to find product of its digits :- ");
scanf("%d",&num);
while(num>0)//The loop will work until the number is 0
{
  x=num%10;//modulus operator is used as it returns the remainder(The last digit)
  pro=pro*x;
  num=num/10;//to get the remaining number
}
printf("The product of the digits of the given number is :-   %d",pro);
}
