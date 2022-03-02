/// Mamun Ahmed
/// 212-115-002
/// CSE-54

#include <stdio.h>
int main()
{
    int t, i, j, a=0, b, c;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d", &b);
        for(j=1,a=0; j<=b; j++)
        {
            scanf("%d",&c);
            if(c>0) a+=c;
        }
        if(a>=0)
            printf("Case %d: %d\n", i, a);
    }
    return 0;
}
