/// Mamun Ahmed
/// 212-115-002
/// CSE-54

#include<stdio.h>
int main()
{
    char s[1000];
    int num[1000], P[1000], ans, i, x, y, L, next;
    scanf("%s", &s);
    L = strlen(s);
    for(i = 1; i<=L; i++)
    {
        num[i]+=num[i-1]+(s[i]=='[');
    }
    P[L] = 0;
    x = 1;
    y = 0;
    for(i=L-1; i>0; i--)
    {
        if(s[i] == '(' || s[i] == '[')
        {
            continue;
        }
        next = i+1+P[i+1];
        if(s[i] == '(' && s[next] == ')' || s[i] == '[' && s[next] == ']')
        {
            P[i] = next-i+1+P[next+1];
        }
    }
    for(i = 1; i<=L; i++)
    {
        if(num[i+P[i]-1] - num[i-1] > ans)
        {
            ans = num[i+P[i]-1]-num[i-1];
            x = i;
            y = i+P[i]-1;
        }

    }
    printf("%d\n", ans);
    for(i = x; i<=y; i++)
    {
        printf("%c", s[i]);
    }

    return 0;
}
