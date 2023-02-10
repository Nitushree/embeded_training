#include <stdio.h>
int main()
{
    int x= 23;
    switch(x)
    {case 3+5: printf("choice1");
    break;
    case 3+4*5: printf("choice2");
    break;
    default: printf("default");
    break;}
}
