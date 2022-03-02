#include<stdio.h>
int main()
{
    int lucky_numbers[] = {4,7,47,74,44,444,447,474,477,777,774,744};
    int n, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < 12; i++)
    {
        if (n % lucky_numbers[i] == 0) count++;
    }
    if (count > 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}

