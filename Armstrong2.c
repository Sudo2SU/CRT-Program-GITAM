#include<stdio.h>
int main()
{
 int n,r,sum=0,num,l=0;
 printf("Enter the value of n : ");
 scanf("%d", &n);
 num=n;
 while(n!=0)
 {
  l++;
  n=n/10;	
 }
  n=num;
  while(n!=0)
  {
   r=n%10;
   sum=sum+pow(r,1);
   n=n/10;	
  }
  if(num==sum)
  printf("The given input %d is an Armstrong number", num);
 else
  printf("The given input %d is not an Armstrong number", num);
return 0;
}
