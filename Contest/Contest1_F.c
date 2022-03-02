//Mamun [212-115-002(CSE-54)]

#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    if (a <= 4)
    {
        printf("few");
    }

    else if (a <= 9)
    {
        printf("several");
    }

    else if (a <= 19)
    {
        printf("pack");
    }

    else if (a <= 49)
    {
        printf("lots");
    }

    else if (a <= 99)
    {
        printf("horde");
    }

    else if (a <= 249)
    {
        printf("throng");
    }

    else if (a <= 499)
    {
        printf("swarm");
    }

    else if (a <= 999)
    {
        printf("zounds");
    }

    else
    {
        printf("legion");
    }

    return 0;
}
