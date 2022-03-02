#include<stdio.h>
int main()
{
    int n, i, j, num[1000], temp, m, d, x;
    scanf("%d",&n);
    for(i = 0; i < n; i ++)
    {
        scanf("%d",&num[i]);
    }
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (num[i] > num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
                scanf("%d",&m);
                for(int i = 0; i < m; i ++)
                {
                    scanf("%d",&d);
                    int l = 0,r = n,mid;
                    while(l < r)
                    {
                        mid = (l + r) / 2;
                        if(num[mid] <= d) l = mid + 1;
                        else r = mid;
                    }
                    printf("%d\n",l);
                }
            }
        }
    }
}
