#include <stdio.h>
int main()
{
    int n,a=0,b=1,nextTerm,i;
printf("enter a number=");
scanf("%d",&n);


for(i=1;i<=n;i++)

{printf("fibonacci series: %d\n",a);
nextTerm=a+b;
a=b;
b=nextTerm;

}
return 0;}
