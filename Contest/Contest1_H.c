//Mamun [212-115-002(CSE-54)]

#include<stdio.h>
int main()
{
int num, i, n;
scanf("%d", &n);

     for(i=1; i<=n; i++)
     {
          scanf("%d", &num);
          if (num>=80)
          {
               printf("case %d: A+\n", i);
          }
          else if(num>=75)
          {
               printf("Case %d: A\n", i);
          }
          else if(num>=70)
          {
               printf("Case %d: A-\n", i);
          }
          else if(num>=65)
          {
               printf("Case %d: B+\n", i);
          }
          else if(num>=60)
          {
               printf("Case %d: B\n", i);
          }
          else if(num>=55)
          {
               printf("Case %d: B-\n", i);
          }
          else if(num>=50)
          {
               printf("Case %d: C\n", i);
          }
          else if(num>=45)
          {
               printf("Case %d: D\n", i);
          }
          else
          {
               printf("Case %d: F\n", i);
          }

     }
     return 0;
}
