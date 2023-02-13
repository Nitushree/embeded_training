#include "stdio.h"
int add(int a, int b)
{
    if (!b){return a;}
    int sum =a^b;
    int carry= (a & b)<<1;
    return add(sum,carry);
}
int main(){
    int num1,num2;
    printf("enter the first value");
    scanf("%d",&num1);
    printf("enter the second number");
    scanf("%d",&num2);
    int result= add(num1, num2);
    printf("\n The result is: %d",result);
    return 0;
}