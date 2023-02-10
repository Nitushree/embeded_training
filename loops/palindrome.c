#include <stdio.h>
int main()
{int result=0,q,n,remainder;
printf("enter the number: ");
scanf("%d",&n);
q=n;
while (q!=0)
{
remainder=q%10;
result=result*10+remainder;
q=q/10;
}
if(result==n)
printf("It is a palindrome number");
else
printf("It is not a palindrome number");
return 0;
}