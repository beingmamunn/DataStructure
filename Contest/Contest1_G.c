//Mamun [212-115-002(CSE-54)]

#include<stdio.h>
int main()
{
     int i, n, num;
     scanf("%d", &n);

     for (i=1; i<=n; i++)
     {
          scanf("%d", &num);
          if(num%5==0)
          {
               printf("%d\n", num/5);
          }
          else printf("%d\n", (num/5)+1);
     }

     return 0;
}
