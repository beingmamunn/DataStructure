//Mamun [212-115-002(CSE-54)]

#include<stdio.h>
int main()
{
    long long int i, n, p, t=0;
    scanf("%lld", &n);
    for (i=0; i<n; i++)
    {
        scanf("%lld", &p);
        t+=p;
    }
    if(n*(n+1)/2==t)
        printf("Yes\n");
    else printf("No\n");


    return 0;
}
