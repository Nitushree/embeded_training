#include "stdio.h"
int main()
{
    int num,count=0,rem,mul=1,cnt,result=0;
    printf("enter the number: ");
    scanf("%d",&num);
    int q=num;
    while(q!=0)
    {q=q/10;
        count++;
    }
      cnt=count;
      q=num;
     while(q!=0){ rem=q%num;
        while(cnt!=0)
        {mul=mul*rem;
        cnt--;}
        result=result+mul;
        cnt=count;
        q=q/10;
        mul=1;}
        if(result==num)
        printf("it is an armstrong number",num);
        else 
        printf("it is not an armstrong number",num);
        return 0;
return 0;
}