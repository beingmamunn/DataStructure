//Mamun [212-115-002(CSE-54)]

#include<stdio.h>
int main()
{
     int a, b, c, i, n;
     scanf("%d", &n);
     for(i=1; i<=n; i++)
     {
          scanf("%d %d %d", &a, &b, &c);
          if(a<=20&&b<=20&&c<=20)
               printf("Case %d: Good\n", i);
          else printf("Case %d: Bad\n", i);
     }

     return 0;
}
