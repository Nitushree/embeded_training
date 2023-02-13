#include<stdio.h>
//int add(int,int);
int add(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}
int main()
{
    int c, d,sum;
    printf("enter 2 numbers: ");
    scanf("%d%d",&c,&d);
    sum=add(c,d);
    printf("addition is: %d",sum);
}