#include <stdio.h>
int main()
{
    int a, b, count=0;
    printf("enter a number: ");
    scanf("%d",&a);
    for(b=1;b<=a/2;b++)
    {if (a%b==0)
    {count++;}}
    if(count==2)
    {printf("it is a prime number");}
    else{printf("it is not a prime number");}
    //return 0;

}