/// Mamun Ahmed
/// 212-115-002
/// CSE-54

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n,m,i,j;
    int str[105];
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        for(i=0; i<n; i++)
            scanf("%d",&str[i]);
        int bus=0,mark;
        for(i=0; i<n; i++)
        {
            if(str[i] == m)
                bus++;
            else
            {
                int sum=str[i];

                for(j=i+1; j<n; j++)
                {
                    sum += str[j];
                    if(sum == m)
                    {
                        i=j;
                        bus++;
                        sum=0;
                        break;
                    }
                    if(sum > m)
                    {
                        j--;
                        i=j;
                        bus++;
                        sum=0;
                        break;
                    }
                }
                if(i == n-1 && sum > 0)
                    bus++;
            }
        }
        printf("%d\n",bus);
    }
}

