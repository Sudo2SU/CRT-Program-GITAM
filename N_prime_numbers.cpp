//print the first n prime numbers
#include<stdio.h>
int main()
{
 int n,i,j,flag;
 printf("Enter the value of n : ");
 scanf("%d",&n);
 for(i=2;n>0;i++)
 {
  flag=0;
  for(j=2;j<=i/2;j++)
  {
   if(i%j==0)
   {
   	flag=1;
   	break;
   } 	
  }
  if(flag==0)
  {
   printf("%d",i);
   n--;	
  } 	
 }
return 0;
}
