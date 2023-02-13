#include <stdio.h>
int areaOfRect(int length,int breadth)
{
    int area;
    area=length *breadth;
    return area;
}
int main()
{
    int l,b,area;
    printf("enter l and b: ");
    scanf("%d%d",&l,&b);
    area= areaOfRect(l,b);
    printf("%d\n",area);
    //return 0;
}