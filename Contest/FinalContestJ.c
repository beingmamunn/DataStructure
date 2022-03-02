#include<stdio.h>
int main()
{
    char s[100], t[100], i, n;
    gets(s);
    gets(t);
    n=strlen(t);
    int pos = 0;
    for (i=0; i<n; i++)
    {
        if (t[i] == s[pos])
        {
            pos += 1;
        }
    }
    printf("%d", pos+1);
    return 0;
}
