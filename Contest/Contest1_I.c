//Mamun [212-115-002(Cse-54)]

#include<stdio.h>
int main()
{
     int i, n, pos, lift, time, temp;
     scanf("%d", &n);
     for(i=1; i<=n; i++)
     {
          scanf("%d %d", &pos, &lift);
          if(lift>=pos)
          {
               temp=lift-pos;

          }
          else temp=pos-lift;

          time=4*temp+4*pos+19;
          printf("Case %d: %d\n", i, time);
     }

     return 0;
}
