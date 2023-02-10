#include<stdio.h>
int main()
{
    int a;
    printf("enter the no. of rows: ",a);
    scanf("%d",&a);
    for (int b=0;b<=a;b++)
    {for(int c=0;c<=2*a-1;c++)
    if (c>=a-(b-1) && c<=a+(b-1))
    {printf("*");}
    else
    printf(" ");
    printf("\n");}
     return 0;
}