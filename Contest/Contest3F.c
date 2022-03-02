/// Mamun Ahmed
/// 212-115-002
/// CSE-54

#include<stdio.h>
#include<string.h>
int main()
{
    char back[500][100], front[500][100], cur[100], com[100];
    int i, j, n, b, p, f;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("Case %d: \n", i+1);
        strcpy(cur, "http://uva.onlinejudge.org/");
        b = 0;
        f = 0;
        while(1)
        {
            p = 0;
            scanf(" %[^\n]", com);
            if(com[0] == 'V')
            {
                f = 0;
                b++;
                strcpy(back[b-1], cur);
                for(j=6; com[j]!='\0'; j++)
                {
                    cur[p] = com[j];
                    p++;
                }
                cur[p] = '\0';
                printf("%s\n",cur);
            }
            else if(com[0] == 'B')
            {
                if(b==0)
                {
                    printf("Ignored\n");
                }
                else
                {
                    f++;
                    strcpy(front[f-1], cur);
                    strcpy(cur, back[b-1]);
                    b--;
                    printf("%s\n",cur);
                }
            }
            else if(com[0] == 'F')
            {
                if(f==0)
                {
                    printf("Ignored\n");
                }
                else
                {
                    b++;
                    strcpy(back[b-1], cur);
                    strcpy(cur, front[f-1]);
                    f--;
                    printf("%s\n",cur);
                }
            }
            else if(com[0] == 'Q')
            {
                break;
            }
        }
    }
    return 0;
}
