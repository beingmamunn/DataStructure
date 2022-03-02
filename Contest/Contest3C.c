/// Mamun Ahmed
/// 212-115-002
/// CSE-54

#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    while (n != 1)
    {
        printf("%d ", n);
        for (i=2; i<=n; ++i)
        {
            if (n % i == 0)
            {
                n /= i;
                break;
            }
        }
    }
    printf("%d\n", n);
    return 0;
}
