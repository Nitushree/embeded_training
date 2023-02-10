#include <stdio.h>
int main()
{
    int a,b;
    printf("enter 2 numbers: ");
    scanf("%d %d",&a,&b);
while(b!=0)
{a++;
b--;}
printf("the sum of 2 numbers is %d: ",a);
return 0;
}