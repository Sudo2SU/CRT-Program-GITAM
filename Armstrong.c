//input :153
//output : It is Armstrong number
//input : 123
//output : Not an armstrong number
//Given input is an Armstrong number or not(3 digit)?
#include<stdio.h>
int main()
{
 int n,r,sum=0,num;
 printf("Enter the value of n : ");
 scanf("%d",&n);
 num=n;
 while(n!=0)
 {
  r=n%10;
  sum=sum+r*r*r;
  n=n/10;	
 }
 if(num==sum)
  printf("The given input %d is an Armstrong number", num);
 else
  printf("The given input %d is not an Armstrong number", num);
return 0;  	
}

