#include <stdio.h>
int func(int num)
{
    int count=2;
    while(num)
    {count++;
    num>>=2;
    }return(count);
    }
int main()
{int num;
    printf("enter a num: ");
    scanf("%d",&num);
    func(num);
    printf("%d",func(num));
    }