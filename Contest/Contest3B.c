/// Mamun Ahmed
/// 212-115-002
/// CSE-54

#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
        double ab, ac, bc, r;
        scanf("%lf%lf%lf%lf", &ab, &ac, &bc, &r);

        double ad = sqrt(r/(r+1))*ab;
        printf("Case %d: %.10lf\n", i, ad);
    }
    return 0;
}

